print(334)

print("shakil")

x = 10
y = 2
print(x // y)


def solve(a, b):
    return a**b
    
result = solve(2, 4)
print(result)

def display_person(**kwargs):
    for key,value in kwargs.items():
        print(f"{key}: {value}")


display_person(Name="Amir Khan", Age="45")


numbers =[7,8,5,4,3,2,4]
print(numbers[::-1])


numbers =[22,19,19,14,33]
numbers.sort()
print(numbers)


numbers = [10, 20, 30, 40, 50]
print(numbers[-4:-1])

numbers = [9, 15, 2, 36]
numbers[1:4] = [20, 14, 36]
print(numbers)


person_info = {"name": "Sakib", "salary": 80000}
value = person_info.get("salary")
print(value)


student = { 
  "name": "Amir", 
  "class": 10, 
  "marks": 85 
}
student.pop("marks")


try:
    result =20//5
except:
    print("error happened")
finally:
    print("finally here")


from math import *
result=ceil(5.00001)
print(result)


num = lambda a:a*a
print(num(2**2))


def call():
    print('calling someone i dont know')
    return 'call done'

class Phone:
    price = 12000
    color = 'blue'
    brand = 'samsung'
    features = ['camera', 'speaker', 'hammer']


    def call(self):
        print('calling someone i know')


my_phone = Phone()
call()




class A:
    def __init__(self, value):
        value = 3
        self.value = value

    def change(self):
        self.value = 12


ans = []
a = A(13)
ans.append(a.value)
a.change()
ans.append(a.value)
print(ans)



class Shop:
    cart = []

    def __init__(self, buyer):
        self.buyer = buyer

    def add_to_cart(self, item):
        self.cart.append(item)


p1 = Shop('meh jabeeeen')
p1.add_to_cart('shoes')
p1.add_to_cart('phone')


nisho = Shop('noisho')
nisho.add_to_cart('cap')
nisho.add_to_cart('watch')
print(nisho.cart)



class Shop:
    shopping_mall = 'Jamuna'

    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = []

    def add_to_cart(self, item):
        self.cart.append(item)


p1 = Shop('meh jabeeeen')
p1.add_to_cart('shoes')
p1.add_to_cart('phone')


nisho = Shop('noisho')
nisho.add_to_cart('cap')
nisho.add_to_cart('watch')
print(nisho.cart)




class Phone:
    price = 12000
    color = 'blue'
    brand = 'samsung'

    def call(self):
        print('calling one person')

    def send_sms(self, phone, sms):
        text = f'Sending SMS to: {phone+5}'
        return text


my_phone = Phone()
result = my_phone.send_sms(41524, 'Missy, I missed to miss you')
print(result)