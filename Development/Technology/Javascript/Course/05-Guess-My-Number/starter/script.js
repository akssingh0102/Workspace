'use strict';
const secretNumber = Math.trunc(Math.random() * 20) + 1;
document.querySelector('.number').textContent = secretNumber;

let score = 20;

const displayScore = () => {
    --score;
    if (score === 0) {
        document.querySelector('.message').textContent = '🤙 You Loose';
    }
    document.querySelector('.score').textContent = score;
};

const handlePlayerWon = () => {
    document.querySelector('body').style.backgroundColor = "#60b347";
    document.querySelector('.number').style.width = "30rem";
}

document.querySelector('.check').addEventListener('click', function () {
    const guessValue = Number(document.querySelector('.guess').value);

    if (!guessValue) {
        document.querySelector('.message').textContent = '⛔️ No Number';
    } else if (guessValue === secretNumber) {
        document.querySelector('.message').textContent =
            '🎉 Valla you have guessed the number !!';
            handlePlayerWon();
    } else if (guessValue < secretNumber) {
        document.querySelector('.message').textContent = 'A little higher ☝️';
        displayScore();
    } else {
        document.querySelector('.message').textContent = 'A little lower 👇';
        displayScore();
    }
});
