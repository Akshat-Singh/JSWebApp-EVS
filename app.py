from flask import Flask
import flask
import time

app = Flask(__name__)


@app.route('/')
def hello():
    return flask.render_template('Homepage.html')

def notHello():
    return flask.render_template('Homepage.html')

if __name__ == '__main__':
    app.run()
