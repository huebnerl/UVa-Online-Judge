#include <iostream>
#include <vector> 

using namespace std;

struct UpChain {
    vector<int> numbers;
    int maxValue;
};

int main(){
    vector<int> numbers; 
    int num; 

    while (cin >> num) { 
        // Add the entered number to the vector 
        numbers.push_back(num); 
    } 

    shared_ptr<UpChain> longestChain;

    vector<UpChain> upChainCollection;
    for (int currentNumber : numbers){
        vector<UpChain> newUpChainCollection;

        // go through existing collection and look for possible chains to extend
        for (size_t j = 0; j < upChainCollection.size(); j++) {
            // if current number is larger then max -> create a new extended chain 
            if (currentNumber > upChainCollection.at(j).maxValue){
                UpChain newChain;
                newChain.numbers = upChainCollection.at(j).numbers;
                newChain.numbers.push_back(currentNumber);
                newChain.maxValue = currentNumber;
                newUpChainCollection.push_back(newChain);

                // update longest
                if (longestChain != nullptr){
                   if (newChain.numbers.size() >= longestChain.get()->numbers.size()){
                        longestChain = make_shared<UpChain>(newChain);
                   }
                }
            }

        }
        UpChain simpleChain;
        simpleChain.numbers.push_back(currentNumber);
        simpleChain.maxValue = currentNumber;
        newUpChainCollection.push_back(simpleChain);

        // update longest
        if (longestChain != nullptr){
            if (simpleChain.numbers.size() >= longestChain.get()->numbers.size()){
                longestChain = make_shared<UpChain>(simpleChain);
            }
        } else {
            longestChain = make_shared<UpChain>(simpleChain);
        }

        // add new Chains
        upChainCollection.insert(end(upChainCollection), begin(newUpChainCollection), end(newUpChainCollection));
    }

    cout << endl;
    cout << longestChain.get()->numbers.size() << endl;
    cout << "-" << endl;
    for (int finalNumbers : longestChain.get()->numbers) { 
        cout << finalNumbers << endl; 
    } 
    cout << endl; 
  
    return 0; 
}