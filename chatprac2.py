from tkinter import*

from numpy import roots
root = Tk()
root.title("Chatbot")
def send():
    txt.insert(END,"YOU->"+ e.get())
    user = e.get().lower()
    if(user=="hi"):
        txt.insert(END," "+ " BOT-> ha bhai kya bolte")
    e.delete(0,END)
txt = Text(root)
txt.grid()
e  = Entry(root)
e.grid()
send = Button(root, text = "send", command=send).grid()
root.mainloop()