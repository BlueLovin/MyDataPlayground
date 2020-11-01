myArray = [-11,-5,0,1,2,9,12]
squaredArray = []

for i in range(len(myArray)):
    print(myArray[i])
    squaredArray.append((myArray[i] ** 2))

print("------------\nNEWARRAY\n")
squaredArray.sort()
for i in range(len(squaredArray)):
    print(squaredArray[i])