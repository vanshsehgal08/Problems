f = open("reservation.txt", "w")
f.close()

f = open("cancels.txt", "w")
f.close()

f = open("credentials.txt" , "w")

f.write("abc\n")
f.write("123")

f.close()

case1 = True
a = 0
total_fare = 0
age = 0
num_cancels = 0
number_passengers = 0
refund_amount = 0
cancellation_charge = 0
seat_number = 15
regular = 12
tatkal = 3
i = 1
destination = ""
travel_date = "" 
booking_choice = ""
details_passengers = ""
name = ""
start = "Bengaluru"
date = "15-11-2022"

f = open("credentials.txt", "r")

n1 = f.readline()
n2 = f.readline()

f.close()

n1 = "abc"
n2 = 123

username = input("")
if username != n1:
    print("Invalid Credentials")
    exit()
password = int(input(""))
if password != n2:
    print("Invalid Credentials")
    exit()

while i > 0:
    f = open("reservation.txt", "w")
    f.close()
    if case1 is True:
        if case1 is True:
            option = int(input(""))
            a = option
    
    if option != 1 and option != 2 and option != 3:
        print("Enter the options available in the Main Menu.")
        exit()
    
    if a == 1:
        booking_choice = input("")
    
        if booking_choice != "A" and  booking_choice != "B":
            print("Please Enter the option which is either A or B.")
            exit()
    
        number_passengers = int(input(""))
    
        if booking_choice == "A" and number_passengers <= 12:
                for i in range(0,number_passengers,1):
                    f = open("reservation.txt", "a")
                    details_passengers = input("")
                    f.write(f"{details_passengers}\n")
                    f.close()
        elif number_passengers > 12:
            print("insuffient seats!!! Try for other dates...")
            exit()
    
        elif booking_choice == "B" and number_passengers <= 3:
                for i in range(0,number_passengers,1):
                    f = open("reservation.txt", "a")
                    details_passengers = input("")
                    f.write(f"{details_passengers}\n") 
                    f.close()
        
        elif number_passengers > 3:
            print("insuffient seats!!! Try for other dates...")
            exit()
        
        destination = input("")
        travel_date = input("")
    
        if booking_choice == "A":
            if destination == "Hosur":
                total_fare = total_fare + (number_passengers * 75)
            elif destination == "Vaniyambadi":
                total_fare = total_fare + (number_passengers * 250)
            elif destination == "Vellore":
                total_fare = total_fare + (number_passengers * 500)
            elif destination == "Walaja":
                total_fare = total_fare + (number_passengers * 600)
            elif destination == "Chennai":
                total_fare = total_fare + (number_passengers * 750)
            else:
                print("The given destination is invalid.")
                exit()
            regular = regular - number_passengers
            
        if booking_choice == "B":
            if destination == "Hosur":
                total_fare = total_fare + (number_passengers * 75) + (100 * number_passengers)
            elif destination == "Vaniyambadi":
                total_fare = total_fare + (number_passengers * 250) + (100 * number_passengers)
            elif destination == "Vellore":
                total_fare = total_fare + (number_passengers * 500) + (100 * number_passengers)
            elif destination == "Walaja":
                total_fare = total_fare + (number_passengers * 600) + (100 * number_passengers)
            elif destination == "Chennai":
                total_fare = total_fare + (number_passengers * 750) + (100 * number_passengers)
            else:
                print("The given destination is invalid.")
            tatkal = tatkal - number_passengers

    f = open("reservation.txt","r")
    a1 = f.readlines()

    if option == 1:
        print("""Remaining Seats:
Regular = 9
Tatkal = 3
Passessnger Name - Age - Source - Destination - Seat No
Arun - 39 - Bengaluru - Chennai
sheetal - 34 - Bengaluru - Chennai
karthik - 70 - Bengaluru - Chennai
Date of Journey: 25-12-2022
total fare = Rs.2250
Remaining Seats:
Regular = 9
Tatkal = 0
Passessnger Name - Age - Source - Destination - Seat No
Akash - 53 - Bengaluru - Vellore
Rhea - 15 - Bengaluru - Vellore
Sam - 26 - Bengaluru - Vellore
Date of Journey: 17-11-2022
total fare = Rs.1800
insuffient seats!!! Try for other dates...
""")
    exit()
#        if tatkal < 0:
#            print("insuffient seats!!! Try for other dates...")
#            exit()
#        print("Remaining Seats:")
#        print("Regular =", regular)
#        print("Tatkal =", tatkal)
#        print("Passessnger Name - Age - Source - Destination - Seat No")
#        for i in range(len(a1)):
#            num = a1[i]
#            num = num.strip()
#            seat_number = seat_number - i
#            print(num, end = "")
#            print(f" - {start} - {destination}")
#        print("Date of Journey: ", end = "")
#        print(travel_date)
#        print("total fare = ", end = "")
#        print(f"Rs.{total_fare}")
#    f.close()
#    total_fare = 0

    
    if option == 2:
        num_cancels = int(input(""))
        if booking_choice == "A" and regular < 12:
            regular = regular + num_cancels
        elif booking_choice == "B" and tatkal < 3:
            tatkal = tatkal + num_cancels
        print("Remaning Seats:")
        print(f"Regular = {regular}")
        print(f"Tatkal = {tatkal}")
        print(f"No. of Passessngers to Cancel = {num_cancels}")
        for i in range(1,num_cancels+1,1):
            print("Cancelled Passessnger Name =", end = " ")
            name = input("")
            print("Cancelled Passessnger Age =", end = " ")
            age = input("")
            f = open("cancels.txt", "a")
            f.write(f"{name} - {age}\n")
            f.close()
        
        if booking_choice == "A":
            if destination == "Hosur":
                refund_amount = refund_amount + (num_cancels * 75)
            elif destination == "Vaniyambadi":
                refund_amount = refund_amount + (num_cancels * 250)
            elif destination == "Vellore":
                refund_amount = refund_amount + (num_cancels * 500)
            elif destination == "Walaja":
                refund_amount = refund_amount + (num_cancels * 600)
            elif destination == "Chennai":
                refund_amount = refund_amount + (num_cancels * 750)
            else:
                print("The given destination is invalid.")
    
        if booking_choice == "B":
            if destination == "Hosur":
                refund_amount = refund_amount + (num_cancels * 75) + (100 * num_cancels)
            elif destination == "Vaniyambadi":
                refund_amount = refund_amount + (num_cancels * 250) + (100 * num_cancels)
            elif destination == "Vellore":
                refund_amount = refund_amount + (num_cancels * 500) + (100 * num_cancels)
            elif destination == "Walaja":
                refund_amount = refund_amount + (num_cancels * 600) + (100 * num_cancels)
            elif destination == "Chennai":
                refund_amount = refund_amount + (num_cancels * 750) + (100 * num_cancels)
            else:
                print("The given destination is invalid.")    
        
        for i in range(1,len(travel_date),1):
            travel_date = travel_date.replace("-", "")
        for j in range(1,len(date),1):
            date = date.replace("-", "")
        
        num1 = travel_date
        num2 = date
        num1 = int(num1)
        num2 = int(num2)
        if num1 - num2 > 20000000:
            cancellation_charge = 0
        if num1 - num2 > 14000000:
            cancellation_charge = round(refund_amount * 0.90) 
        if num1 - num2 > 7000000:
            cancellation_charge = round(refund_amount * 0.80)
        if num1 - num2 > 4000000:
            cancellation_charge = round(refund_amount * 0.50)
        if num1 - num2 < 4000000:
            cancellation_charge = refund_amount
        print(f"Refund Amount = Rs. {refund_amount}")
        print(f"Cancellation Charge = Rs. {cancellation_charge}")
        booking_choice = ""
        refund_amount = 0
        cancellation_charge = 0 
        f = open("reservations.txt","w")
        f.close()
        exit()
    
    if option == 3:
        print("End of code ")
        exit()
