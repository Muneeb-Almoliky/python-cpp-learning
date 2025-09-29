from flask import Flask, redirect, render_template, request, session
import sqlite3
from flask_session import Session

app=Flask(__name__)

connection = sqlite3.connect("store.db", check_same_thread=False)
db = connection.cursor()



app.config["SESSION_PERMENANT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)


@app.route("/")
def index():
    db.execute("SELECT * FROM books")
    books = db.fetchall()
    data_list = []
    for row in books:
        data_dict = {
            "id" : row[0],
            "title" : row[1]
        }
        data_list.append(data_dict)
    return render_template("books.html" , books = data_list)

@app.route("/cart", methods=["GET", "POST"])
def login():

    #insure a cart exits
    if "cart" not in session:
        session["cart"] = []
    
    #POST
    if request.method == "POST":
        book_id = request.form.get("id")
        if book_id:
            session["cart"].append(book_id)
        return redirect("/cart")
        

    db.execute("SELECT * FROM books WHERE id IN (?)", ( session["cart"] ))
    books = db.fetchall()
    data_list = []
    for row in books:
        data_dict = {
            "id" : row[0],
            "title" : row[1]
        }
        data_list.append(data_dict)
    return render_template("cart.html" , books = data_list)
    
@app.route("/logout")
def logout():
    session.clear()
    return redirect("/")


