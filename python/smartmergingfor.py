A=[1,2,3]
B=[4,5,6]
C=[]
m=len(A)
n=len(B)
for i in range(0,m+n):
    if A[m]<B[n]:
        C[i]=A[m]
        m=m+1
    elif A[m]>B[n]:
        C[i]=B[n]
        n=n+1
    else :
        C[i]=A[m]
        i=i+1
        m=m+1
        C[i]=B[n]
        n=n+1
 
print(C)