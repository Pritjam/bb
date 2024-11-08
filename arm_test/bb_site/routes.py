from bb_site import app, global_bomb_index

@app.route('/')
@app.route('/index')
def index():
    global global_bomb_index
    
    return "Hello, World!"