def eliminateDuplicates(lst): 
    newlist = []
    for number in lst:
        if number not in newlist:
            newlist.append(number)
    return newlist

def main():
    numbers =raw_input("Enter numbers separated by space: ")
    x = ((numbers.split()))
    print("The distinct numbers are: ", (eliminateDuplicates(x))) 

main()
