class Bus:
    def __init__(self,number,route,total_seats):
        self.number = number
        self.route = route
        self.total_seats = total_seats
        self.booked_seat = 0

    def available_seat(self):
        return self.total_seats-self.booked_seat
    
    def book_seat(self):
        if self.available_seat()>0:
            self.booked_seat+=1
            # print("Seat book successfully")
            return True
        else:
            # print("Sorry, sit is not available")
            return False
        
class Passenger:
    def __init__(self,name,phone,bus):
        self.name = name
        self.phone = phone
        self.bus = bus


class BusSystem:
    def __init__(self):
        self.buses = []
        self.passengers = []




class Admin:
    def __init__(self):
        self.username = "admin"
        self.password = "1234"

    def login(self,username,password):
        if self.username == username and self.password == password:
            return True
        else:
            return False

bussystem=BusSystem()
admin = Admin()
def add_bus(number,route,seats):
    new_bus = Bus(number,route,seats)
    bussystem.buses.append(new_bus)
    print("Bus added Successfully!!!!!")

def book_ticket(bus_number,name,phone):
        for bus in bussystem.buses:
            if bus.number == bus_number :
                if bus.book_seat():
                    passenger = Passenger(name,phone,bus)
                    bussystem.passengers.append(passenger)
                    print("Ticket Booked Successfully\n"
                          "Fare : 500tk\n"
                          f"Route : {bus.route}")
                    return
                else:
                    print("Sorry, Seats are not available")
                    return
        print("Please enter correct bus number")

def show_buses():
        if not bussystem.buses:
            print("No buses available..")
            return
        else:
            for bus in bussystem.buses:
                print(f"-----x----- \n Bus number : {bus.number} \nRoute : {bus.route} \nAvailable seat : {bus.available_seat()}")

def all_bus():
    if not bussystem.buses:
        print("No bus available..")
        return
    else:
        for bus in bussystem.buses:
            print(f"Bus number : {bus.number} Route : {bus.route} Total seat : {bus.total_seats}\n")

def admin_menu():
    while True:
        print("Welcome Admin!!!")
        print("1. Add Bus")
        print("2. View All Buses")
        print("3. Logout ")
        ad_choice = int(input("Enter your choice : "))
        if ad_choice ==1:
            num = input("Enter Bus Number : ")
            rou = input("Enter Bus Route : ")
            seat = int(input("Enter Bus Seats : "))
            add_bus(num,rou,seat)
        elif ad_choice ==2:
            all_bus()
        elif ad_choice ==3:
            return
        else:
            print("Invalid Input...")


def home_page():
    while(True):
        print("1. Admin Login")
        print("2. Book Ticket")
        print("3. View Buses")
        print("4. Exit")
        choice = int(input("Enter your choice : "))

        if choice==1:
            un = input("Enter Username : ")
            pas = input("Enter Password : ")
            if admin.login(un,pas):
                print("Login Successful!!")
                admin_menu()
            else:
                print("Enter correct password or username..")
        elif choice==2:
            bn=input("Enter Bus Number : ")
            nm = input("Enter Name : ")
            ph = input("Enter Phone Number : ")
            book_ticket(bn,nm,ph)
        elif choice ==3:
            show_buses()
        elif choice ==4:
            break
        else:
            print("Invalid Input!!!!!")

home_page()