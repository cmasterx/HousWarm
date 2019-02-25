from flask import Flask, render_template, url_for, flash, redirect, request
from datetime import datetime
import json
app = Flask(__name__)


@app.route("/")
@app.route("/home")
def home():
    return render_template('home.html')

@app.route("/houseview")
def houseview():
    return render_template('houseview.html')

if __name__ == '__main__': 
    app.run(debug=True)