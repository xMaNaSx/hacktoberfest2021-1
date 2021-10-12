STARTING_POINT = (0,-200)
MOVE_DISTANCE = 10
FINISH_LINE_y = 200

import turtle as t

class Player(t.Turtle):
    def __init__(self):
        super().__init__()
        self.penup()
        self.shape("turtle")
        self.goto(0,-230)
        self.color("green")
        self.setheading(90)


    def goTop(self):
        new_ycor = self.ycor() + 10
        self.goto(self.xcor(),new_ycor)


    def resistance(self):
        self.goto(0,-250)