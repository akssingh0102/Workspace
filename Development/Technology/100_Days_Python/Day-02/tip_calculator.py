#If the bill was $150.00, split between 5 people, with 12% tip. 

#Each person should pay (150.00 / 5) * 1.12 = 33.6
#Format the result to 2 decimal places = 33.60

#Tip: There are 2 ways to round a number. You might have to do some Googling to solve this.💪

#Write your code below this line 👇

amount = float(input("Enter the bill amount\n"))
tip = int(input("Enter the tip percentage %\n"))
members = int(input("Enter the number of members\n"))

amount_each_pay = (1 + (tip/100.0)) * (amount*1.0/members)
amount_each_pay = round(amount_each_pay, 2)
amount_each_pay = "{:.2f}".format(amount_each_pay)

print("Each person will pay" , amount_each_pay)

