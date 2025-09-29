from tkinter import *

def button_click(number):
   global eqution_text

   eqution_text = eqution_text + str(number)
   
   eqution_label.set(eqution_text)

def button_equal():
    global eqution_text
    try:
     
     total = str(eval(eqution_text))
     eqution_label.set(total)
     eqution_text = total
    
    except ZeroDivisionError:
        eqution_label.set("Arithmitic Error")
    
    
    
    except SyntaxError:
        eqution_label.set("Syntax Error")

    
    
def button_clear():
    
    global eqution_text
    eqution_label.set("")
    eqution_text = ""
   
   
My_calc=Tk()

My_calc.title("My Calculator")
My_calc.geometry("400x600")
eqution_text = ""

eqution_label = StringVar()

label = Entry(My_calc, textvariable=eqution_label, font=("consolas", 20), bg="white", width=24)
label.grid(row=0, column=0, padx=20, pady=30, columnspan=3)






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
decimal = Button(My_calc, text=".",  padx=104, pady=20, command=lambda: button_click("."))

button_clear=Button(My_calc, text="clear", padx=96, pady=20, command=button_clear)

button_equal=Button(My_calc, text="=", padx=106, pady=20, command = button_equal)

button_add=Button(My_calc, text="+", padx=40, pady=20, command=lambda: button_click('+'))

button_subrtact=Button(My_calc, text="-", padx=41, pady=20, command=lambda: button_click('-'))

button_multiply=Button(My_calc, text="*", padx=40, pady=20, command=lambda: button_click('*'))

button_divide=Button(My_calc, text="/", padx=104, pady=20, command=lambda: button_click('/'))
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

button_multiply.grid(row=7, column=0)

button_divide.grid(row=6, column=1, columnspan=2)
    
decimal.grid(row=7, column=1, columnspan=2)







My_calc.mainloop()