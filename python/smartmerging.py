a=[0,3,5,6,11]
b=[2,4,32,36,45]
c=[]
if a[0]<b[0]:
    c.append(a[0])
    c.append(b[0])
elif b[0]<a[0]:
    c.append(b[0])
    c.append(a[0])

elif a[0]<b[1]:
    c.append(a[0])
    c.append(b[1])

elif b[1]<a[0]:
    c.append(b[1])
    c.append(a[0])

if a[1]<b[1]:
    c.append(a[1])
    c.append(b[1])

elif b[1]<a[1]:
    c.append(b[1])
    c.append(a[1])

elif a[1]<b[2]:
    c.append(a[1])
    c.append(b[2])

elif b[2]<a[1]:
    c.append(b[2])
    c.append(a[1])

if a[2]<b[2]:
    c.append(a[2])
    c.append(b[2])

elif b[2]<a[2]:
    c.append(b[2])
    c.append(a[2])

elif a[2]<b[3]:
    c.append(a[2])
    c.append(b[3])

elif b[3]<a[2]:
    c.append(b[3])
    c.append(a[2])


if a[3]<b[3]:
    c.append(a[3])
    c.append(b[3])

elif b[3]<a[3]:
    c.append(b[3])
    c.append(a[3])

elif a[3]<b[4]:
    c.append(a[3])
    c.append(b[4])

elif b[4]<a[3]:
    c.append(b[4])
    c.append(a[3])

elif a[4]<b[4]:
    c.append(a[4])
    c.append(b[4])

elif b[4]<a[4]:
    c.append(b[4])
    c.append(a[4])

print(c)