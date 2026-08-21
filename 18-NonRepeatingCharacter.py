s = input("Enter a string: ")

found = False

for char in s:
    if s.count(char) == 1:
        print("First non-repeating character:", char)
        found = True
        break

if found == False:
    print("No non-repeating character")
