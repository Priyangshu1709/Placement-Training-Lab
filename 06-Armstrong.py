num = int(input("Enter a number: "))

original_num = num
digit_sum = 0

while num > 0:
    digit = num % 10
    digit_sum += digit ** 3
    num //= 10

if digit_sum == original_num:
    print("Armstrong number")
else:
    print("Not an Armstrong number")
