var n;
var answer;

function isPrime(num) {

    if (num === 2) {
      return "The Number Is Prime";
    } else if (num > 1) {
      for (var i = 2; i < num; i++) {
  
        if (num % i !== 0) {
          return "The Number Is Prime";
        } else if (num === i * i) {
          return "The Number Is Composite";
        } else {
          return "The Number Is Composite";
        }
      }
    } else {
      return "The Number Is Composite";
    }
  
  }

document.write(isPrime(11));