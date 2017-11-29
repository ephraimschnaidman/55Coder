def Cel_to_F(c):
    c = float(c) * 9/5 + 32
    if c < -273.15:
        return "Not a possible temperature!!"
    else:
        return c

c = input("Enter the celsius: ")
print(Cel_to_F(c))

file = open('temperatures.txt','w')

temperatures = [10,-20,-289,100]
for t in temperatures:
    if t >= -273.15:
        t = float(t) * 9/5 + 32
        file.write(str(t)+'\n')
    #print(Cel_to_F(t))
file.close()
