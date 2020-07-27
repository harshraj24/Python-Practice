sentence=input().split()
words=""
for i in sentence:
    word=i
    size=len(word)
    for j in range(0,size):
        words+=chr(ord(word[j])+size)
    words+=" "
    

print(words)