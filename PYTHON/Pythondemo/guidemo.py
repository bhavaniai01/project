from tkinter import*
app =Tk()
app.title("gui app page")
app.state("zoomed")

def clickresult(x):
    a=int(inputbox2.get())
    b=int(inputbox3.get())
    
    if x=='+':
        c=a+b
        lbltitle3.config(text=c)
    if x=='-':
        c=a-b
        lbltitle3.config(text=c)
    if x=='*':
        c=a*b
        lbltitle3.config(text=c)

    if x=='/':
        c=a/b
        lbltitle3.config(text=c)

    if x=='%':
        c=a%b
        lbltitle3.config(text=c)
    if x=='**':
        c=a**b
        lbltitle3.config(text=c)
    if x== '++':
            a+=1
            lbltitle3.config(text=a)
    if x== 'in':
            c= a+1
            lbltitle3.config(text=c)
    
    
# def clickresult():
#     a=int(inputbox2.get())
#     b=int(inputbox3.get())
#     c=a-b
#     lbltitle3.config(text=c)
# def clickresult():
#     a=int(inputbox2.get())
#     b=int(inputbox3.get())
#     c=a*b
#     lbltitle3.config(text=c)

    #print("added value ...." ,a+b)



  
app.config(bg="skyblue")
lbltitle1=Label(app,text="Arthimatic operation",font=("Onyx",26),fg="red")
lbltitle1.grid(row=0,column=4,padx=40,pady=40)

lbltitle2=Label(app,text="Enter your value a",font=("Berlin Sans FB",20))
lbltitle2.grid(row=1,column=1)
inputbox2=Entry(app,width=45)
inputbox2.grid(row=1,column=2)

lbltitle3=Label(app,text="Enter your value b",font=("Berlin Sans FB",20))
lbltitle3.grid(row=2,column=1,)
inputbox3=Entry(app,width=45)
inputbox3.grid(row=2,column=2)

lbltitle3=Label(app,text="")
lbltitle3.grid(row=4,column=5,padx=40,pady=40)
#app.config(bg="green")


clickname=Button(app,text="addtion" ,command= lambda:clickresult('+')) 
clickname.grid(row =3, column=1)
clickname=Button(app,text="Subtraction" ,command= lambda:clickresult('-')) 
clickname.grid(row =3, column=2)

clickname=Button(app,text="multipilcattion" ,command= lambda:clickresult('*')) 
clickname.grid(row =3, column=3)
clickname=Button(app,text="division" ,command= lambda:clickresult('/')) 
clickname.grid(row =3, column=4)
clickname=Button(app,text="modules" ,command= lambda:clickresult('%')) 
clickname.grid(row =3, column=5)
clickname=Button(app,text="power" ,command= lambda:clickresult('**')) 
clickname.grid(row =3, column=6)
clickname=Button(app,text="increment" ,command= lambda:clickresult('++')) 
clickname.grid(row =3, column=7)
clickname=Button(app,text="in" ,command= lambda:clickresult('in')) 
clickname.grid(row =3, column=8)

import calendar

yy = 2024
mm = 2
yyy = 2025
mmm = 2

# display the calendar
print(calendar.month(yy, mm))

print(calendar.month(yyy, mmm))

  





app.mainloop()

# from datetime import date

# today = date.today()
# print("Today's date:", today)
#  for x in range(12):

