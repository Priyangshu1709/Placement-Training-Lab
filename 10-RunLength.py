text = input("Enter a string: ")

count = 1

for i in range(1, len(text)):
    if text[i] == text[i - 1]:
        count += 1
    else:
        print(text[i - 1], count)
        count = 1

print(text[-1], count)
