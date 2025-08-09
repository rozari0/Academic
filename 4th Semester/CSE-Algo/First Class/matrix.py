
def print_matrix(row, column):
    matrix = []
    for i in range(row):
        matrix.append([])
        nums = input("Input a row: ").split()
        for j in range(column):
            matrix[i].append(nums[j])

    for tempRow in matrix:
        print(tempRow)


row = int(input("Input number of row: "))
column = int(input("Input number of column: "))

print_matrix(row,column)