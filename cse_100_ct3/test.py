# num1 = int(input("Enter a number:"))
# num2 = int(input("Enter a another number:"))
# num3 = int(input("enter a third number:"))
# avg =int((num1+num2+num3)/3)


# if  num1<0
#     print("Invalid Number")
# elif num1>10
#     print("Invalid")
# elif num2<0
#     print("invalid")
# elif num2>10
#     print('invalid')
# elif num3<0
#     print("invalid")
# elif num3>10
#     print('invalid')
# elif avg<5
#     print("poor")
# elif avg >=5
#     print("average")
# elif avg <=7
#     print(average)


# if(num1<0 & num1>10) | (num2<0 & num2>10) | (num3 <0 & num3>10):
#     print("Invalid Number")
# elif avg<5:
#     print(avg)
#     print("Poor")
# elif (avg>=5 & avg<=7):
#     print(avg)
#     print("Average")
# elif avg == 8 :
#     print(avg)
#     print("Good")
# elif avg>8:
#     print(avg)
#     print("Great")


num1 = int(input("enter a number:"))
num2 = int(input("enter a number:"))
num3 = int(input("enter a number:"))
avg = int((num1 + num2 + num3)/3)

if (num1 < 0 | num1 > 10) | (num2 < 0 | num2 > 10) | (num3 < 0 | num3 > 10):
    print("Invalid Number")
elif avg < 5:
    print(avg, "poor marks")
elif avg >= 5 & avg <= 7:
    print(avg, "avarage")
elif avg == 8:
    print(avg, "good")
elif avg > 8:
    print(avg, "Great")
