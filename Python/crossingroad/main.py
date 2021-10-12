import turtle as t
import time
import random
import player as p
import scoreboard
import carmanager

move_speed = 0.1
my_screen = t.Screen()
my_screen.setup(width=600,height=600)
my_screen.bgcolor("black")
my_screen.tracer(0)
my_screen.title("crossing road game")
play = p.Player()
scoreboard = scoreboard.ScoreBoard()

my_screen.listen()

my_screen.onkey(play.goTop,"Up")

new_class = []





a  =0
is_game_on = True

while is_game_on:

    random_chance = random.randint(1,6)

    if random_chance == 6:
        new_y = random.randint(-250, 250)
        new_car = carmanager.CarManager((280, new_y))
        new_class.append(new_car)

    for car in new_class:
        car.carmove()
        if play.distance(car) < 20:
            scoreboard.game_ended()
            is_game_on = False


    time.sleep(move_speed)







    my_screen.update()

    if play.ycor() > 250:
        play.resistance()
        scoreboard.update()
        scoreboard.updatelevel()
        move_speed *= 0.9



my_screen.exitonclick()
