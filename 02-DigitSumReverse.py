num = int(input("Enter an integer: "))

digit_sum = 0
reverse_num = 0

while num > 0:
    digit = num % 10
    digit_sum += digit
    reverse_num = reverse_num * 10 + digit
    num //= 10

print("Sum of digits:", digit_sum)
print("Reversed number:", reverse_num)
