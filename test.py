myArray = [2,534,21,534254,2,12,12,12,12]


counter = 0
for i in range(len(myArray)):
    currentlength = (len(str(myArray[i])))
    if currentlength % 2 == 0:
        counter+=1
print(counter)