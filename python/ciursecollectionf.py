myList = [1, 2, 1000, 289, 40.2, -20]
myDict = {'apple': 4, 'orange': 2, 'strawberry':10}

myList.sort() # sort and replace the list, not returning any value
print(myList) # -> -20, 1, 2, 40.2, 289, 1000

myList.pop(3)
print(myList) # -> -20, 1, 2, 289, 1000

myDict.pop('apple')
print(myDict) # -> only orange and strawberry

mySecondList = myDict.values()
print(mySecondList) # -> [2, 10]