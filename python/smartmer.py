list1=[0,3,5,6,11]
list2=[2,4,32,36,45,55]
newlist=list()
p=len(list1)
i=0
while i<p:
    if list1[i]<list2[i]:
        newlist.append(list1[i])
        newlist.append(list2[i])
    elif list2[i]<list1[i]:
        newlist.append(list2[i])
        newlist.append(list1[i])
    elif list1[i]<list2[i+1]:
        newlist.append(list1[i])
        newlist.append(list2[i+1])
    elif list2[i+1]<list1[i]:
        newlist.append(list2[i+1])
        newlist.append(list1[i])
    i+=1
print(newlist)