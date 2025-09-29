from tkinter import *

My_calc=Tk()

My_calc.title("My Calculator")

e = Entry(My_calc, width=53, borderwidth=5)

e.grid(row=0, column=0, columnspan=3, padx=10, pady=10)

#e.insert(0,)

def button_click(number):
    #e.delete(0, END)
    current=e.get()
    e.delete(0, END)
    e.insert(0, str(current) + str(number))

def button_clear():
    e.delete(0, END)

def button_Add():
    first_number = e.get()
    global f_num 
    global math
    math="addition"
    f_num = int(first_number)
    e.delete(0, END)

def button_Substract():
    first_number = e.get()
    global f_num
    global math 
    math="subtraction"
    f_num = int(first_number)
    e.delete(0, END)


def button_Multiply():
    first_number = e.get()
    global f_num 
    global math
    math="multiplication"
    f_num = int(first_number)
    e.delete(0, END)


def button_Divide():
    first_number = e.get()
    global f_num 
    global math
    math="divison"
    f_num = int(first_number)
    e.delete(0, END)

def button_equal():
    second_number = e.get()
    e.delete(0, END)
    if math=="addition":
       e.insert(0, f_num + int(second_number))
    elif math=="subtraction":
       e.insert(0, f_num - int(second_number))
    elif math=="multiplication":
       e.insert(0, f_num * int(second_number))
    else :
       if int(second_number)==0:
        e.insert(0, "Error")
       else :
        e.insert(0, f_num / int(second_number))
    



button_0=Button(My_calc, text="0", padx=40, pady=20, command=lambda: button_click(0))
button_1=Button(My_calc, text="1", padx=40, pady=20, command=lambda: button_click(1))
button_2=Button(My_calc, text="2", padx=40, pady=20, command=lambda: button_click(2))
button_3=Button(My_calc, text="3", padx=40, pady=20, command=lambda: button_click(3))
button_4=Button(My_calc, text="4", padx=40, pady=20, command=lambda: button_click(4))
button_5=Button(My_calc, text="5", padx=40, pady=20, command=lambda: button_click(5))
button_6=Button(My_calc, text="6", padx=40, pady=20, command=lambda: button_click(6))
button_7=Button(My_calc, text="7", padx=40, pady=20, command=lambda: button_click(7))
button_8=Button(My_calc, text="8", padx=40, pady=20, command=lambda: button_click(8))
button_9=Button(My_calc, text="9", padx=40, pady=20, command=lambda: button_click(9))


button_clear=Button(My_calc, text="clear", padx=88, pady=20, command=button_clear)

button_equal=Button(My_calc, text="=", padx=98, pady=20, command = button_equal)

button_add=Button(My_calc, text="+", padx=40, pady=20, command=button_Add)

button_subrtact=Button(My_calc, text="-", padx=41, pady=20, command=button_Substract)

button_multiply=Button(My_calc, text="x", padx=40, pady=20, command=button_Multiply)

button_divide=Button(My_calc, text="/", padx=40, pady=20, command=button_Divide)
# Put buttons on the screan


button_1.grid(row=3,column=0)
button_2.grid(row=3,column=1)
button_3.grid(row=3,column=2)

button_4.grid(row=2,column=0)
button_5.grid(row=2,column=1)
button_6.grid(row=2,column=2)

button_7.grid(row=1,column=0)
button_8.grid(row=1,column=1)
button_9.grid(row=1,column=2)

button_0.grid(row=4,column=0)

button_clear.grid(row=4, column=1, columnspan=2)

button_equal.grid(row=5, column=1, columnspan=2)

button_add.grid(row=5, column=0)

button_subrtact.grid(row=6, column=0)

button_multiply.grid(row=6, column=1)

button_divide.grid(row=6, column=2)
    








My_calc.mainloop()