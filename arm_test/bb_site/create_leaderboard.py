from jinja2 import Environment, FileSystemLoader

environment = Environment(loader=FileSystemLoader("templates/"))
template = environment.get_template("leaderboard.html")

submissions = dict()
with open("bomb_log.txt", "r") as infile:
    for line in infile:
        toks = line.split()
        bomb_id = toks[0]
        # ensure we have a dict entry for this id
        if not toks[0] in submissions:
            submissions[bomb_id] = {"best_stage": 0, "explosions":0}
        if toks[1] == 'pass':
            submissions[bomb_id]["best_stage"] = max(submissions[bomb_id]["best_stage"], int(toks[2]))
        elif toks[1] == 'fail':
            submissions[bomb_id]["explosions"] += 1


with open("leaderboard.html", "w") as outfile:
    outfile.write(template.render(submissions=submissions))
