#include <iostream>

using namespace std;

size_t find_index(string &str, size_t start, size_t end, char searchString)
{
	for (size_t i = start; i <= end; i++)
	{
		if (str[i] == searchString)
		{
			return i;
		}
	}
	return -1;
}

void devide_and_conquer(string& pre_order, size_t pre_order_start, size_t pre_order_end,
	string& in_oder, size_t in_order_start, size_t in_order_end, string& post_order)
{
	if (pre_order_start > pre_order_end || in_order_start > in_order_end)
		return;

	size_t idx = find_index(in_oder, in_order_start, in_order_end, pre_order[pre_order_start]);
	
	devide_and_conquer(pre_order, pre_order_start + 1, pre_order_start + idx - in_order_start,
		in_oder, in_order_start, idx - 1, post_order);

	devide_and_conquer(pre_order, pre_order_start + idx - in_order_start + 1, pre_order_end,
		in_oder, idx + 1, in_order_end, post_order);

	post_order.push_back(pre_order[pre_order_start]);
}

int main()
{
	int n;
	cin >> n;

	string output = "";
	for (size_t i = 0; i < n; i++)
	{
		int nr_of_nodes;
		string pre_order;
		string in_order;
		cin >> nr_of_nodes >> pre_order >> in_order;

		string post_order;
		devide_and_conquer(pre_order, 0, nr_of_nodes, in_order, 0, nr_of_nodes - 1, post_order);

		output.append(post_order + "\n");
	}
	cout << output;
	return 0;
}
