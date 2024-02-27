let person = {
  name: "John",
  surname: "Sins",
};

let { name, surname, currentAge: age = 20 } = person;

console.log(age);
// this is buble 