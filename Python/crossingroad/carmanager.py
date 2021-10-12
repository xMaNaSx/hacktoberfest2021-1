COLOR = ["red","orange","yellow"]
STARTING_MOVING_DISTANCE =5
MOVE_INCREMENT = 10
import time
import turtle as t
import random as ra

class CarManager(t.Turtle):
    def __init__(self,position):
        super().__init__()
        self.penup()
        self.shape("square")
        self.shapesize(stretch_wid=1,stretch_len=2)
        self.color(ra.choice(COLOR))

        self.setpos(position)
        self.carmove()




    def carmove(self):

           new_x = self.xcor() - 10
           self.goto(new_x,self.ycor())

