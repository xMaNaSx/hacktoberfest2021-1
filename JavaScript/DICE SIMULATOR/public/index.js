var randomNumber1 = Math.random();
randomNumber1 = randomNumber1 * 6;
randomNumber1 = Math.floor(randomNumber1) + 1;

var randomNumber2 = Math.random();
randomNumber2 = randomNumber2 * 6;
randomNumber2 = Math.floor(randomNumber2) + 1;

var p1 = randomNumber1;
var p2 = randomNumber2;

if (p1 > p2) {
    document.querySelector("h2").innerHTML = "Player 2 wins 🚩";
} else if (p2 > p1) {
    document.querySelector("h2").innerHTML = "🚩Player 1 wins";

} else if (p1 === p2) {
    document.querySelector("h2").innerHTML = "Its a Tie";

}



if (p2 === 1) {
    document.querySelector(".img1").setAttribute("src", "dice1.png");
} else if (p2 == 2) {
    document.querySelector(".img1").setAttribute("src", "dice2.png");

} else if (p2 == 3) {
    document.querySelector(".img1").setAttribute("src", "dice3.png");

} else if (p2 == 4) {
    document.querySelector(".img1").setAttribute("src", "dice4.png");

} else if (p2 == 5) {
    document.querySelector(".img1").setAttribute("src", "dice5.png");

} else if (p2 == 6) {
    document.querySelector(".img1").setAttribute("src", "dice6.png");

}

if (p1 === 1) {
    document.querySelector(".img2").setAttribute("src", "dice1.png");
} else if (p1 == 2) {
    document.querySelector(".img2").setAttribute("src", "dice2.png");

} else if (p1 == 3) {
    document.querySelector(".img2").setAttribute("src", "dice3.png");

} else if (p1 == 4) {
    document.querySelector(".img2").setAttribute("src", "dice4.png");

} else if (p1 == 5) {
    document.querySelector(".img2").setAttribute("src", "dice5.png");

} else if (p1 == 6) {
    document.querySelector(".img2").setAttribute("src", "dice6.png");

}