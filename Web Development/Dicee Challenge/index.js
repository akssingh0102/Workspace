var randomNumber1 = Math.floor(Math.random()*6)+1;
var randomNumber2 = Math.floor(Math.random()*6)+1;

var image1 = document.querySelector(".img1");
var image2 = document.querySelector(".img2");

var newSrc1 = "images/dice"+randomNumber1+".png";
var newSrc2 = "images/dice"+randomNumber2+".png";

image1.setAttribute("src",newSrc1);
image2.setAttribute("src",newSrc2)

results();

function results(){
    if(randomNumber1 > randomNumber2){
        document.querySelector("h1").textContent = "🤟Player 1 Won";
    }
    else if(randomNumber1 < randomNumber2){
        document.querySelector("h1").textContent = "Player 2 Won🤟";
    }
    else{
        document.querySelector("h1").textContent = "🤟Draw🤟";
    }
}