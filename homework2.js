const readline = require("readline");

const read = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const ask = (myQuestion) => {
  return new Promise((resolve, reject) => {
    read.question(myQuestion, (input) => resolve(input));
  });
};

const calculateSec = async () => {
  console.log("\nCalcular dias, horas y minutos en segundos\n");
  let days = await ask("Insertar dias: ");
  days = parseInt(days);
  let hours = await ask("Insertar horas: ");
  hours = parseInt(hours);
  let mins = await ask("Insertar minutos: ");
  mins = parseInt(mins);
  let result = days * 86400;
  result += hours * 3600;
  result += mins * 60;
  console.log("\n==================================================");
  if (result) console.log(`\nEl resultado en segundos es: ${result}`);
  else console.log("\nNo inserto los tres digitos");
  console.log("\n==================================================");
  calculateMedia();
};

const calculateMedia = async () => {
  console.log("\nCalcular media de 5 numeros\n");
  let sum = 0;
  for (let i = 0; i < 5; i++) {
    let num = await ask(`${i} - Insertar num: `);
    num = parseInt(num);
    sum += num;
  }
  console.log("\n==================================================");
  if (sum) console.log(`\nLa media es: ${sum / 5}`);
  else console.log("\n No inserto los 5 digitos");
  console.log("\n==================================================");
  checkIfTrueOrFalse();
  read.close();
};

const checkIfTrueOrFalse = () => {
  let a = 5;
  let b = 6;
  let c = 7;
  let d = 8;
  console.log(
    `\nEl resultado de (a < b && c > d) || (a > b && c < d) es: ${
      (a < b && c > d) || (a > b && c < d)
    }\n`
  );
};

read.on("close", () => {
  console.log("\nGracias por utilizar nuestro programa!");
  process.exit(0);
});

const init = () => {
  calculateSec();
};

init();
