FONT = ("courier",24,"normal")

import turtle

class ScoreBoard(turtle.Turtle):
    def __init__(self):
        super().__init__()
        self.hideturtle()
        self.color("white")
        self.penup()
        self.goto(0,270)
        self.level = 0
        self.updatelevel()

    def update(self):
        self.level +=1

    def updatelevel(self):
        self.clear()
        self.write(f"LEVEL {self.level}",align ="center",font=FONT)


    def game_ended(self):
        self.goto(0, 0)
        self.write("GAME ENDED",align="center",font= FONT)


