// // This is my first JavaScript code!
// console.log("Hello World!");


// // variables
// let name = 'Ezra';
// console.log(name);

// // Cannot be a reserved keyword
// // Should be meaningful
// // Cannot start with a number (1name)
// // Cannot contain a space or hypen (-)
// // Are case-sensitive

// let firstName = 'Ezra';
// let lastName = 'Vergabera';


// //* let vs const
// // let interestRate = 0.3;
// // interestRate = 1;

// // const
// const interestRate = 0.3;
// interestRate = 1;

// console.log(interestRate)


// // Primitives or Value types

// let name = 'Ezra'; // String Literal
// let age = 21; // Number Literal
// let isApproved = true; // Boolean Literal
// let firstName = undefined;
// let lastName = null;
// // JS is a Dynamic Typing programming language


// // Reference types
// let person = {
//     name: 'Ezra',
//     age: 21
// };

// // Dot Notation
// person.name = 'Jose';

// // Bracket Notation
// let selection = 'name';
// person[selection] = 'Nazarene';

// console.log(person.name);


// // Arrays
// let selectedColors = ['red', 'blue']; // Array Literal
// selectedColors[2] = 'green';
// selectedColors[3] = 1;
// console.log(selectedColors.length)


// Functions
function greet(firstName, lastName) {
    console.log('Hello ' + firstName + ' ' + lastName);    
}

greet('Ezra', 'Vergabera');

function square(number) {
    return number * number;
}

console.log(square(2));