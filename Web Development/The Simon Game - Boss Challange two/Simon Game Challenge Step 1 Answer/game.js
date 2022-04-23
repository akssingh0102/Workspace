var buttonColours = ["red", "blue", "green", "yellow"];
var gamePattern = [];
var userClickedPattern = [];
var level = 0;

// javascript code
var buttons = document.querySelectorAll(".btn");
for (var i = 0; i < buttons.length; i++) {
  buttons[i].addEventListener("click", function () {
    userClickedPattern.push(this.id);
    var idOfButton = this.id;
    playSound(idOfButton); // Plays the sound
    animatePress(idOfButton); // add animination to the button
    checkAnswer(userClickedPattern.length - 1);
  });
}

document.addEventListener("keypress", function () {
  if (level == 0) {
    nextSequence();
  }
});
// jquert code for above code
// $(".btn").click(function() {

//   var userChosenColour = $(this).attr("id");
//   userClickedPattern.push(userChosenColour);

//   playSound(userChosenColour);

// });

function checkAnswer(currentLevel) {
  if (gamePattern[currentLevel] === userClickedPattern[currentLevel]) {
    if (userClickedPattern.length === gamePattern.length) {
      console.log("success");
      setTimeout(function () {
        nextSequence();
      }, 1000);
    } 
  }
  else {
    console.log("wrong");
    wrongAnswer();
  }
}

function wrongAnswer() {
  playSound("wrong");
  startOver();
  document.getElementById("level-title").innerHTML =
    "Game Over, Press Any Key to Restart";
  document.querySelector("body").classList.add("game-over");
  setTimeout(function () {
    document.querySelector("body").classList.remove("game-over");
  }, 1000);
}

function startOver() {
  level = 0;
  gamePattern = [];
  userClickedPattern = [];
}

function animatePress(currentColour) {
  var selectedButton = document.getElementById(currentColour);
  selectedButton.classList.add("pressed");

  setTimeout(function () {
    selectedButton.classList.remove("pressed");
  }, 100);
}

function nextSequence() {
  userClickedPattern = [];
  var levelString = "Level " + level;
  document.getElementById("level-title").innerHTML = levelString;
  level++;
  var randomNumber = Math.floor(Math.random() * 4);
  var randomChosenColour = buttonColours[randomNumber];
  gamePattern.push(randomChosenColour);

  $("#" + randomChosenColour)
    .fadeIn(100)
    .fadeOut(100)
    .fadeIn(100);

  playSound(randomChosenColour);
}

function playSound(name) {
  // alert(name);
  var audio = new Audio("sounds/" + name + ".mp3");
  audio.play();
}
