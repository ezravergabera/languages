// Counter Program
const decreaseBtn = document.getElementById("decreaseBtn");
const resetBtn = document.getElementById("resetBtn");
const increaseBtn = document.getElementById("increaseBtn");
const countLabel = document.getElementById("countLabel");
let count = 0;

increaseBtn.onclick = function() {
    count++;
    countLabel.textContent = count;
}

decreaseBtn.onclick = function() {
    count--;
    countLabel.textContent = count;
}

resetBtn.onclick = function() {
    count = 0;
    countLabel.textContent = count;
}


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