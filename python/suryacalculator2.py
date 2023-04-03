#prints the selection of the user which uses calculator#
print("MENU:-")   #menu
print("For Addition ->INPUT (1)")
print("For Subtraction-> INPUT (2)")
print("For Multiplication-> INPUT (3)")
print("For Division-> INPUT (4)")
while True:
    option=int(input("Enter Your Response Between-{1/2/3/4}:-"))
    #input the numbers
    a=float(input("Enter Your First Number:- "))
    b=float(input("Enter Your Second Number:-"))
    if option==1:
        print("You Select Addition Operaion>>> ")
        c=a+b
        print(c)  #prints the addition 
    if option==2:
            print("You Select Subtraction Operaion >>>")
            c=a-b
            print(c) #prints the subtraction
    if option==3:
            print("You Select Multiplication Operaion >>>") 
            c=a*b
            print(c) #prints the multiplication
    if option==4:
            print("You Select Division Operaion >>> ")
            c=a/b
            print(c) #prints the division
   
    next_calculation = input("Let's do next calculation? (yes/no): ")
    if next_calculation == "no":
        print ("exit")      
        break       # if user not want any calculation then it transfers the controller to the menu
    else :
        print("Invalid Input") #if user input is invalid then its prints invalid input