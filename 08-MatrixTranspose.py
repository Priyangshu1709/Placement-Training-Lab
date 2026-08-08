rows = int(input("Enter number of rows: "))
columns = int(input("Enter number of columns: "))

matrix = []

print("Enter the elements:")

for i in range(rows):
    row = []
    for j in range(columns):
        row.append(int(input()))
    matrix.append(row)

print("Transpose of the matrix:")

for i in range(columns):
    for j in range(rows):
        print(matrix[j][i], end=" ")
    print()
