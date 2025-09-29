from flask import Flask, redirect, render_template, request
import sqlite3
app=Flask(__name__)

connection = sqlite3.connect("froshims.db", check_same_thread=False)
db = connection.cursor()
db.execute('''CREATE TABLE IF NOT EXISTS registrants(id INTEGER PRIMARY KEY, name TEXT NOT NULL, sport TEXT NOT NULL)''')

SPORTS = ["Basketball",
        "Soccer",
        "Tennis"
]

@app.route("/", methods=["GET"])
def index():   
    return render_template("index.html", sports=SPORTS)

@app.route("/deregister", methods=["POST"])
def derigester():
    
    #Forget registrant
    id = request.form.get("id")
    if id :
        db.execute("DELETE FROM registrants WHERE id = ?", id)
        connection.commit()
    return redirect("/registrants")


@app.route("/register", methods=["GET", "POST"])
def register():
    name = request.form.get("name")
    sport = request.form.get("sport")
    # Validate name and sport
    if not name or not sport in SPORTS  :
        return render_template("error.html", message="Missing name or sport")
    
    
    # Remeber registrants
    
    db.execute("INSERT INTO registrants( name, sport) VALUES (?, ?)", ( name, sport) )
    connection.commit()
    
   
    
    # Confirm registration
    return redirect("/registrants")


@app.route("/registrants")
def registrants():
    db.execute("SELECT * FROM registrants")
    registrants = db.fetchall()
    data_list = []
    for row in registrants:
        data_dict = {
            "id" : row[0],
            "name" : row[1],
            "sport" : row[2]
        }
        data_list.append(data_dict)
    
    return render_template("registrants.html", Registrants=data_list)










