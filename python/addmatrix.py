#a program for addition of two matrices
R=int(input("Enter The Number Of Rows:"))
C=int(input("Enter The Number Of Columns: "))
#by this user input the value of m and n where m*n
print("Enter The Elements Of First Matrix ")
mymatrix=[[int(input())for i in  range(C)]for i in range(R)]#inputs first matrices
print("First Matrix Is:")
for n in mymatrix:
    print(n)
print("Enter The Elements Of Second Matrix ")
yourmatrix=[[int(input())for i in  range(C)]for i in range(R)]#input second matrices
print("Second Matrix Is:")
for n in yourmatrix:
    print(n)
result=[[0 for i in range(C)]for i in range(R)]# Declared the "result" variable where the result of the addition stores
for i in range(R):
    for j in range(C):
        result[i][j]=mymatrix[i][j]+yourmatrix[i][j]#addition of two matrices occurs here

print("The sum of the given two matrices is:")
for r in result:
    print(r)# finally prints the addition of two matrices which we want 
print("Have a nice Day....>>>")