nums = [0,0,1,1,1,2,2,3,3,4]


def removeDuplicates(num):
    for i in num:
        if(num[i] == num[i+1]):
            num.pop(i+1)
    return num

def printArray(array):
    for i in range(len(array)):
        print(array[i])

printArray(nums)
print('---------')
printArray(removeDuplicates(nums))