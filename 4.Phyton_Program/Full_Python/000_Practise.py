class Item:
    def __init__(self, name):
        self.name = name
        self.rate = int(input("Enter rate: "))
        self.quantity = int(input("Enter Quantity: "))
        self.item_total = self.rate * self.quantity

    def Display(self):
        print("Item Name: ", self.name)
        print("Item Rate: ", self.rate)
        print("Item quantity: ", self.quantity)
        print("Item cost: ", self.item_total)

    def Quantity_Update(self, Extra):
        self.quantity += Extra
        self.item_total = self.rate * self.quantity


class Bill:
    def __init__(self, Cust_name, No_product):
        self.Cust_name = Cust_name
        self.date = input("Enter Date(dd/mm/yy): ")
        self.No_product = No_product
        self.items = {}
        count = 0
        while count < No_product:
            name = input("\nEnter Product Name: ")
            if name in self.items:
                choice = input("Item already added, go back?(y/n): ")
                if choice.lower == "n":
                    print("1.Over write?\n2.Add to the quantity? ")
                    choice = int(input("Enter choice: "))
                    if choice == 1:
                        self.items[name] = Item(name)
                    elif choice == 2:
                        extra = int(input("Number to be added to previous quantity: "))
                        self.items[name].Quantity_Update(extra)
                    else:
                        print("Error-No such option")
            else:
                self.items[name] = Item(name)
                count += 1
        self.Total_items = 0
        self.total = 0
        for i in self.items:
            self.total += self.items[i].item_total
            self.Total_items += self.items[i].quantity

    def Display(self):
        print("\nCustomer name: ", self.Cust_name)
        print("Date of purchase: ", self.date)
        for i in self.items:
            self.items[i].Display()
        print()
        print("Total number of Items: ", self.Total_items)
        print("Total Amount: ", self.total)


cust = []
number = int(input("Enter Number of Customers: "))
print()
for i in range(1, number + 1):
    print("--------------------------------------------")
    name = input(f"Enter name of customer {i} : ")
    No_products = int(input("Enter the total number products: "))
    temp = Bill(name, No_products)
    cust.append(temp)
    print("--------------------------------------------")
    print()
for i in range(len(cust)):
    print(f"-------------- CUSTOMER {i+1} BILL --------------")
    cust[i].Display()
    print("--------------------------------------------")
