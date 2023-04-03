#a program for addition of two matrices
R=int(input("Enter The Number Of Rows:"))
C=int(input("Enter The Number Of Columns: "))
#by this user input the value of m and n where m*n
print("Enter The Elements Of First Matrix ")
mat1=[[int(input())for i in  range(C)]for i in range(R)]#inputs first matrices
print("First Matrix Is:")
for n in mat1:
    print(n)
print("Enter The Elements Of Second Matrix ")
mat2=[[int(input())for i in  range(C)]for i in range(R)]#input second matrices
print("Second Matrix Is:")
for n in mat2:
    print(n)
result=[[0 for i in range(C)][for j in range(R)]for k in range(n)]# Declared the "result" variable where the result of the addition stores

# matrix printing row wise           
print("The multiplication of the given two matrices is:")
for r in result:
    print(r)# finally prints the addition of two matrices which we want 
print("Have a nice Day....>>>")