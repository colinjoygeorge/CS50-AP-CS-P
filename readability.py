from cs50 import get_string

i = get_string("Text: ")
wordNum, lettersNum, sentenceNum = 0, 0, 0

for u in range(len(i)):
    if( u == 0 and i[u] != ' ') or (u != len(i) - 1 and i[u] == ' ' and i[u + 1] != ' '):
        wordNum += 1
    if i[u].isalpha():
        lettersNum += 1
    if i[u] == '.' or i[u] == '?' or i[u] == '!':
        sentenceNum += 1
        
o = lettersNum / wordNum * 100
p = sentenceNum / wordNum * 100
index = round(0.0588 * o - 0.296 * p - 15.8)
if index < 1:
    print("Before Grade 1")
elif index >= 16:
    print("Grade 16+")
else:
    print(f"Grade {index}")