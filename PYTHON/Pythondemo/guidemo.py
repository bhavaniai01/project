from tkinter import*
app =Tk()
app.title("gui app page")
app.state("zoomed")
def clickresult():
    a=int(inputbox2.get())
    b=int(inputbox3.get())
    c=a-b
    lbltitle3.config(text=c)

    #print("added value ...." ,a+b)

                
app.config(bg="red")
lbltitle1=Label(app,text="Arthimatic operation")
lbltitle1.grid(row=0,column=4,padx=40,pady=40)

lbltitle2=Label(app,text="Enter your value a")
lbltitle2.grid(row=1,column=1,padx=40,pady=40)
inputbox2=Entry(app,width=45)
inputbox2.grid(row=1,column=2)

lbltitle3=Label(app,text="Enter your value b")
lbltitle3.grid(row=2,column=1,padx=40,pady=40)
inputbox3=Entry(app,width=45)
inputbox3.grid(row=2,column=2)

lbltitle3=Label(app,text="")
lbltitle3.grid(row=4,column=3,padx=40,pady=40)
#app.config(bg="green")


clickname=Button(app,text="submit" ,command=clickresult) 
clickname.grid(row =3, column=8,padx=40,pady=40)

app.mainloop()