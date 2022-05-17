from tkinter import*
root = Tk()
root.title("Chatbot")
def send():
    send = "You -> "+e.get()
    txt.insert(END, " "+send)
    user = e.get().lower()
    if(user == "hello"):
        txt.insert(END, " " + "\nBot -> Hi")
    elif(user == "hi" or user == "hii" or user == "hiiii"):
        txt.insert(END, " " + "Bot -> Hello")
    elif(e.get() == "how are you"):
        txt.insert(END, " " + "Bot -> fine! and you")
    else:
        txt.insert(END, " " + "Bot -> Sorry! I dind't got you")
    e.delete(0, END)
txt = Text(root)
txt.grid(row=0, column=0, columnspan=1)
e = Entry(root, width=100)
e.grid(row=1, column=0)
send = Button(root, text="Send", command=send).grid(row=1, column=1)
root.mainloop()
