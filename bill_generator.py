#write a bill generatin program using list and dictionary
#disctionary inside list

items=[]
n=int(input("Enter no of items"))
for i in range(n):
    name=input("Enter name of the item ")
    rate=int(input("Enter rate of items "))
    quantity=int(input("Enter quantity of item "))
    total=quantity*rate
    i={"Name":name,"Rate":rate,"Quantity":quantity,"Total":total}
    items.append(i)
print(items)