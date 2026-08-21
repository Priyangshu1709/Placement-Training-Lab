str1 = input("Enter first string: ")
str2 = input("Enter second string: ")

if len(str1) != len(str2):
    print("Not Anagrams")
else:
    flag = True

    for ch in str1:
        if str1.count(ch) != str2.count(ch):
            flag = False
            break

    if flag:
        print("Anagrams")
    else:
        print("Not Anagrams")
