number = input()

song_text = ["Happy", "birthday", "to", "you",
             "Happy", "birthday", "to", "you",
             "Happy", "birthday", "to", "Rujia",
             "Happy", "birthday", "to", "you"]

song = []
names = []
for i in range(int(number)):
    names.append(input())

while len(names) > len(song):
    song += song_text

while len(names) < len(song):
    names += names

for j in range(len(song)):
    print(names[j] + ": " + song[j])
