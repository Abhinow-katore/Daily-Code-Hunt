from tkinter import*
root = Tk()
root.title("Chatbot")
def send():
    # send = "You -> "+e.get()
    # txt.insert(END, " "+send)
    txt.insert(END,"You->" +e.get())
    user = e.get().lower()
    if(user == "hello"):
        txt.insert(END, " " + "\nBot -> Hi\n")
    elif(user == "hi" or user == "hii" or user == "hiiii"):
        txt.insert(END, " " + "\nBot -> Hello\n")
    elif(e.get() == "how are you"):
        txt.insert(END, " " + "\nBot -> fine! and you\n")
    else:
        txt.insert(END, " " + "\nBot -> Sorry! I dind't got you\n")
    # e.delete(0, END)
    e.delete(0,END)



txt = Text(root)
txt.grid()
e = Entry(root)
e.grid()
send = Button(root,text = "Send", command = send).grid()
root.mainloop()



# txt = Text(root)
# root.grid()
# e = Entry(root)
# e.grid()
# send = Button(root,text = "send", command=send).grid()