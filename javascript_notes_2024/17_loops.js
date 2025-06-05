// while loop
let inc = 0;
let num = 6;
while (inc < num) {
  console.log("Come On!!");
  inc += 1;
}

// do while loop
let j = 0;
let num2 = 6;
do {
  console.log("run one time ");
} while (j < num2);
{
  console.log("hello world");
  j += 1;
}

// for loop
for (let counter = 0; counter < 6; counter++) {
  console.log("bye world!");
}
for (let counter = 0; counter < 6; counter = counter * 2) {
  console.log("bye world!");
}

// inline variable declaration
for (let i = 0; i < 3; i++) {
  console.log(i);
}
console.log(i); // no such variable

let i = 0;
for (i = 0; i < 3; i++) {
  console.log(i);
}
console.log(i);

// skipping parts
for (; i < 6; ) {
  console.log(i);
  i++;
}

// label
outer: for (let i = 0; i < 3; i++) {
  for (let j = 0; j < 3; j++) {
    let input = prompt(`Value at coords (${i},${j})`, "");
    // if an empty string or canceled, then break out of both loops
    if (!input) break outer; // (*)
    // do something with the value...
  }
}
alert("Done!");
