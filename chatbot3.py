import mailbox
from tkinter import*
root = Tk()
root.title("Chatbot")

def send():
    txt.insert(END, " You->" + e.get())
    user = e.get().lower()
    if(user=="hi"):
        txt.insert(END, " "+ "\nlee Bot->heloo\n")
    e.delete(0,END)

txt = Text(root)
txt.grid()
e = Entry(root)
e.grid()
send = Button(root, text = "send", command = send)
send.grid()
root.mainloop()