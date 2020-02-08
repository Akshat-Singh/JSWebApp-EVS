import flask
import sqlite3
import secondaries
from werkzeug.security import generate_password_hash, check_password_hash

app = flask.Flask(__name__)


@app.route('/', methods=['GET', 'POST'])
def HelloWorld():
    operationsPerSecond = secondaries.calculations()
    return flask.render_template('homepage.html', oPS=operationsPerSecond)


if __name__ == '__main__':
    app.run()
