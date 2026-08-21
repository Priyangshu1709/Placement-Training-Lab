s = input("Enter a string: ")

vowels = "aeiou"
result = ""

for char in s:
    if char.lower() not in vowels:
        result += char

print(result)
