function fizzbuzz(maxNum) {
    let fbArr = [];
    for (let i = 1; i <= maxNum; i++) {
        let element = "";
        if (i % 3 === 0) {element+="Fizz";}
        if (i%5 === 0){element+="Buzz";}
        if (element!==""){fbArr.push(element);} else {fbArr.push(i);}
    }
    return fbArr;
}

console.log(fizzbuzz(3));
console.log(fizzbuzz(5));
console.log(fizzbuzz(15));
console.log(fizzbuzz(100));