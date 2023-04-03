myDict = {'George': 4, 'Jean': 2, 'Paul': 10, 'Andrew': 18, 'Jacob': 8}

myDict['Steve'] = 12

toRemove = ['George', 'Paul', 'Jacob']
for elt in toRemove:
    myDict.pop(elt)

print(myDict.values())