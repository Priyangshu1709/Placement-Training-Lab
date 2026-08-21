sentence = input("Enter a sentence: ")

words = sentence.split()

result = []

for word in words:
    if len(word) == 1:
        word = word.upper()
    else:
        word = word[0].upper() + word[1:-1] + word[-1].upper()

    result.append(word)

print(" ".join(result))
