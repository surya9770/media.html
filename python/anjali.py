shape=input("enter first")
value=input("enter second")

#shape= ['diamond','club','heart']
#value=[2,3,4,5,6,7,8,9,10,11,12,13]
dpoint=0
wpoint=0
if shape=='diamond' or shape == 'club':
    dpoint+=1
elif shape=='heart' and value>0:
    wpoint+=1
elif shape == 'heart' and 'value'==0:
    dpoint+=1
else:
    wpoint += 1
if dpoint>wpoint:
    print("dragon team is the winner")
else:
    print("wizard team is the winner")

