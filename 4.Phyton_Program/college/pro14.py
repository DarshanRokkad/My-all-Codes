# Write a python program to add two matrix using list comprehension
def MatrixInput():
    matrix = []
    row = int(input("Enter number of rows : "))
    col = int(input("Enter number of columns : "))
    for i in range(0,row):
        temp = []
        for j in range(0,col):
            temp.append(int(input(f"Enter the {i+1},{j+1} element : ")))
        matrix.append(temp)
    return matrix
    
def PrintMatrix(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            print(f"{matrix[i][j]}",end=' ')
        print()

def AddMatrix(m1 , m2):
    if len(m1) != len(m2):
        return None
    else :
        result = []
        for i in range(len(m1)):
            if len(m1[i]) !=  len(m2[i]):
                return None
            temp = []
            for j in range(len(m1[i])):
                temp.append(m1[i][j]+m2[i][j])
            result.append(temp)
        return result

print("Enter the first matrix : ")
matrix1 = MatrixInput()
print()
print("Enter the second matrix : ")
matrix2 = MatrixInput()

Result = AddMatrix(matrix1,matrix2)

if Result is None:
    print("Matrix cannot be added.")
else :
    print("Matrix 1 :")
    PrintMatrix(matrix1)
    print("Matrix 2 :")
    PrintMatrix(matrix2)
    print("Resultant Matrix :")
    PrintMatrix(Result)