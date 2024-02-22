//! Ternary operator
// let age = 21;
// let message = age >= 18 ? "You're an adult" : "You're a minor"
// console.log(message);

// let time = 16;
// let greeting = time < 12 ? "Good morning!" : "Good afternoon";
// console.log(greeting);

// let isStudent = true;
// let message = isStudent ? "You are a student" : "You are not a student"
// console.log(message);

let purchaseAmount = 99;
let discount = purchaseAmount >= 100 ? 10 : 0;
console.log(`Your total is ${purchaseAmount - purchaseAmount * (discount/100)}`);


//! checked property
// const myCheckBox = document.getElementById("myCheckBox");
// const visaBtn = document.getElementById("visaBtn");
// const masterCardBtn = document.getElementById("masterCardBtn");
// const payPalBtn = document.getElementById("payPalBtn");
// const mySubmit = document.getElementById("mySubmit");
// const subResult = document.getElementById("subResult");
// const paymentSubmit = document.getElementById("paymentSubmit");

// mySubmit.onclick = function() {
//     if(myCheckBox.checked) {
//         subResult.textContent = `You are subscribed!`;
//     }
//     else {
//         subResult.textContent = `You are NOT subscribed!`;
//     }

//     if(visaBtn.checked) {
//         paymentResult.textContent = `You are paying with Visa`;
//     }
//     else if(masterCardBtn.checked) {
//         paymentResult.textContent = `You are paying with MasterCard`;
//     }
//     else if(payPalBtn.checked) {
//         paymentResult.textContent = `You are paying with PayPal`;
//     }
//     else {
//         paymentResult.textContent = `You must select a payment type`;
//     }
// }


//! random number generator
// const myBtn = document.getElementById("myBtn");
// const myLabel = document.getElementById("myLabel");

// myBtn.onclick = function() {
//     let randomNum = Math.floor(Math.random() * 6) + 1;
//     myLabel.textContent = `Your number is: ${randomNum}`;
// }


//! Practiced random number within a range
// const min = 50;
// const max = 100;

// let randomNum = Math.floor(Math.random() * (max - min)) + min;

// console.log(randomNum);


//! MATH object
// let x = 3.1415;
// let y = 2;
// let z = 1;

// z = Math.round(x);
// z = Math.floor(x);
// z = Math.ceil(x);
// z = Math.trunc(x);
// z = Math.pow(x, y);
// z = Math.sqrt(x);
// z = Math.log(x);
// z = Math.sin(x);
// z = Math.cos(x);
// z = Math.tan(x);
// z = Math.abs(x);
// z = Math.sign(x);
// let max = Math.max(x, y, z);
// let min = Math.min(x, y, z);


//! Counter Program
// const decreaseBtn = document.getElementById("decreaseBtn");
// const resetBtn = document.getElementById("resetBtn");
// const increaseBtn = document.getElementById("increaseBtn");
// const countLabel = document.getElementById("countLabel");
// let count = 0;

// increaseBtn.onclick = function() {
//     count++;
//     countLabel.textContent = count;
// }

// decreaseBtn.onclick = function() {
//     count--;
//     countLabel.textContent = count;
// }

// resetBtn.onclick = function() {
//     count = 0;
//     countLabel.textContent = count;
// }


//! basics of javascript
// console.log(`Hello`);
// console.log(`I like pizza!`);

// window.alert(`This is an alert!`)
// window.alert(`I like pizza!`)

// document.getElementById("myH1").textContent = `Hello`;
// document.getElementById("myP").textContent = `I like pizza!`;


//! variables
// number data types
// let age = 25;
// let price = 10.99;
// let gpa = 2.1;

// // string data types
// let firstName = "Ezra";
// let lastName = "Vergabera";

// // boolean data types
// let online = true;

// console.log(typeof age)
// console.log(typeof firstName)
// console.log(typeof online)
// console.log(`You are ${age} years old`);
// console.log(`The price is P${price}`); 
// console.log(`Your gpa is: ${gpa}`); 
// console.log(`Your name is ${firstName} ${lastName}`)


//! input
// let username;

// document.getElementById("mySubmit").onclick = function() {
//     username = document.getElementById("myText").value;
//     document.getElementById("myH1").textContent = username ? `Welcome ${username}!` : `Welcome`;
// }


//! type conversion
// let age = window.prompt("How old are you?");
// age = Number(age);
// age+=1;

// console.log(age);