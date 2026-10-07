c=int(input("how many elements:"))
list1=[]
for i in range(c):
    list1.append(int(input("Enter the elements:")))
for i in list1:
    if(i%2==0):
        list1.remove(i)
print(list1)
