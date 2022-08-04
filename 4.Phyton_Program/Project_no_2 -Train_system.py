#  Building the train system

class Train():
    def __init__(self,name,seats ,fair):
        self.trainName = name 
        self.seats = seats 
        self.fair = fair 

    @staticmethod
    def display():
        print("\n***********************************************************************")
        print("        W E L C O M E    T O    K O N K A N    R A I L W A Y S\n")
        print("   Press the following to get\n ")
        print("     1 . Train Information")
        print("     2 . Seat booking")
        print("     3 . Seat cancelation")
        print("     4 . Exit")
        print("***********************************************************************")
        ans = int(input("Enter your choice here : "))
        print("")
        return ans

    def getStatus(self):
        print("Train information..")
        print("Train name : ",self.trainName)
        print("Seats available : ",self.seats)
        print("Price of the ticket : ",self.fair)

    def bookInfo(self):
        dec = input(f"Do you need to book the ticket in {self.trainName}\nif yes enter 'Y' and if no then enter 'N' : ")
        dec = dec.upper()
        if dec  == 'Y'and self.seats!=0 :
            print("\nBooking is done!")
            self.seats-=1
        elif dec == "Y" and self.seats==0:
            print("\nWe cannot book the ticket beacause no seat availability")
            print("Please wait until someone cancel the  ticket..")
        else:
            print("\nBooking not done!...\nThanks you! , visit again")

    def cancelTicket(self):
        can = input(f"Are you conform in canceling ticket in {self.trainName}\nif yes enter 'Y' and if no then enter 'N' : ")
        can = can.upper()
        if can == "Y":
            print("Cancelation done succesfully!..")
            self.seats+=1
        else:
            print("Thanks for not cancelling the seat!")

def help():
    di = bullet.display()
    return di

bullet = Train("Chennai Express",8,"$265")
replay = help()
while replay:
    if  replay ==1:
        bullet.getStatus()
    elif replay ==2 :
        bullet.bookInfo()
    elif replay ==3:
        bullet.cancelTicket()
    else :
        print("...T H A N K S     F O R     V I S I T I N G     K O N K A N    R A I L W A Y S...")
        print("**********  V I S I T     K O N K A N    R A I L W A Y S     A G A I N  **********\n")
        replay = False
        break
    print("\nPress any key to move further",end="")
    a = input() # this is to stop running of code upto user enter some random key so that user get enough time to read the the things before proceeding to next step
    replay = help()
print("Press any key to exit from teminal !...",end="")
a = input()