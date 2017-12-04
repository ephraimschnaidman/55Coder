from tkinter import *

window=Tk()

def kg_to_gram_lbs_oz():
    gram=float(kg_value.get())*1000
    t1.insert(END,gram)
    lbs=float(kg_value.get())*2.20462
    t2.insert(END,lbs)
    oz=float(kg_value.get())*35.274
    t3.insert(END,oz)

t0=Label(text='Enter Kg value:')
t0.grid(row=0,column=0)

kg_value=StringVar()
e0=Entry(window,textvariable=kg_value)
e0.grid(row=0,column=1)

b0=Button(window,text="Convert",command=kg_to_gram_lbs_oz)
b0.grid(row=0,column=2)

t1=Text(window,height=1,width=20)
t1.grid(row=1,column=0)

t2=Text(window,height=1,width=20)
t2.grid(row=1,column=1)

t3=Text(window,height=1,width=20)
t3.grid(row=1,column=2)

window.mainloop()
