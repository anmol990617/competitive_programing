def main():
	count=0
	n=int(raw_input("enter the size of an array"))
  	numbers =raw_input("Enter numbers separated by space: ")
    	lst = ((numbers.split()))


	lst.sort()
	for i in range(0,n,1):
		for j in range(i+1,n,1):
			if(abs(int(lst[i])-int(lst[j]))<1 or abs(int(lst[i])-int(lst[j]))==1):
				count+=1
	print count
if __name__=="__main__":
	main()
 
