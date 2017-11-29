'''
Celsius to Fahrenheit converter using user input
'''
def Cel_to_F(c):
    c = float(c) * 9/5 + 32
    if c < -273.15:
        return "Not a possible temperature!!"
    else:
        return c

c = input("Enter the celsius: ")
print(Cel_to_F(c))

'''
Creating a file using given temperatures
'''

temperatures = [10,-20,-289,100]

def writer(temperatures):
    with open('temperatures.txt','w') as file:
        for t in temperatures:
            if t >= -273.15:
                t = float(t) * 9/5 + 32
                file.write(str(t)+'\n')

writer(temperatures)
