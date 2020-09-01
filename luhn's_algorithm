let odd = "";
let sum = 0;
let evensum = 0;
let total;
function isValid(str) {
   for(let i = 0; i < str.length; i+=2) {
        odd = odd.concat(str[i]*2);
    }
    let arr = odd.split("");
    for(let j = 0; j < odd.length; j++) {
        sum += parseInt(odd[j]);
    }

    for (let k =1; k < str.length; k+=2) {
        evensum += parseInt(str[k]); 
    }
    total = sum + evensum;

    if(total % 10 === 0) {
        return 'valid';
    } else {
        return 'invalid';
    }
}

function checkCardType(cardNumber=""){
        if(cardNumber.slice(0,2) === '34' || cardNumber.slice(0,2) === '37' && cardNumber.length === 15) {
            return 'AMEX';
        } else if (cardNumber.slice(0,2) === '51' || cardNumber.slice(0,2) === '52'|| cardNumber.slice(0,2) === '53' || cardNumber.slice(0,2) === '54' || cardNumber.slice(0,2) === '55' && cardNumber.length === 15 ) {
            return "MASTERCARD";
        } else if (cardNumber.length < 17 && cardNumber.length > 12 && cardNumber[0] === '4') {
            return "VISA";
        }
    }

function main(creditCardNumber="") {
    
    let valid = isValid(creditCardNumber);
    if( valid === 'valid') {
        let cardname = checkCardType(creditCardNumber);
        return cardname;
    } else {
        return 'Invalid Card';
    }
    
}

let creditCardNumber = "371890401249953";

console.log(main(creditCardNumber));
