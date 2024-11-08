from flask import Flask

app = Flask(__name__)
global_bomb_index = 0

from bb_site import routes