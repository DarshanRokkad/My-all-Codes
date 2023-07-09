# Write a python program to multiply 2 matrices
def MatrixInput():
    matrix = []
    row = int(input("Enter number of rows : "))
    col = int(input("Enter number of columns : "))
    for i in range(0,row):
        temp = []
        for j in range(0,col):
            temp.append(int(input(f"Enter the {i+1},{j+1} element : ")))
        matrix.append(temp)
        print()
    return matrix
    
def PrintMatrix(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            print(f"{matrix[i][j]}",end=' ')
        print()

def MultiplyMatrix(m1 , m2):
    if len(m1[0]) != len(m2):
        return None
    else :
        result = []
        for i in range(len(m1)):
            temp = []
            for j in range(len(m2[0])):
                sum = 0
                for k in range(len(m2)):
                    sum+=m1[i][k]*m2[k][j]
                temp.append(sum)
            result.append(temp)
        return result

print("Enter the first matrix : ")
matrix1 = MatrixInput()
print()
print("Enter the second matrix : ")
matrix2 = MatrixInput()

Result = MultiplyMatrix(matrix1,matrix2)

if Result is None:
    print("Matrix cannot be added.")
else :
    print("Matrix 1 :")
    PrintMatrix(matrix1)
    print("Matrix 2 :")
    PrintMatrix(matrix2)
    print("Resultant Matrix :")
    PrintMatrix(Result)