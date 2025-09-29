from  tkinter import *
from tkinter import messagebox
# Create the main App window
First_GUI_App = Tk()

# Change the App Title
First_GUI_App.title("My Calculator Age App")

# Set Dimensions
First_GUI_App.geometry("400x200")

# Write Info Label
the_label=Label(First_GUI_App, text="Write Your Age", height=2, font=("Arial", 20), foreground="blue")
the_label.pack()   # Place the text into the Main Window

# Age variable
Age = StringVar()

# Set default value
Age.set("00")

# Create the input for age
Age_input = Entry(First_GUI_App, width=2, font="Arial", textvariable=Age) 
Age_input.pack()


def calc():
  
  # Get age in years 
  the_age_value=Age.get()

  # Get time units
  months = int(the_age_value)*12
  weaks = months * 4
  days = int(the_age_value) * 356

  line_one = f"Your age in moths is : {months}"
  line_two = f"Your age in weaks is : {weaks}"
  line_three = f"Your age in days is : {days}"
  
  all_lines=[line_one, line_two, line_three]
  messagebox.showinfo("Your age in all time units", "\n".join(all_lines) )
  
# Create the calculallate button
btn = Button(First_GUI_App, text="Calculate Age", width=20, height=2, bg="#e91e63", fg="white", borderwidth=0, command=calc)
btn.pack()  # Place button in the main window







# Run th App infinitely
First_GUI_App.mainloop()