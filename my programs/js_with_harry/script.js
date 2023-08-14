let a=4;
let b=8;
let c=a+b;
console.log(c);



function Findcommonele(arr1,arr2){
    let common_ele=[];
    for(let i=0;i<arr1.length;i++){
        if(arr2.includes(arr1[i])){
            if(!common_ele.includes(arr1[i])){
               common_ele.push(arr1[i]);
            }
        }
    }

    commonElements.sort((a, b) => a - b);

    // Return the commonElements array
    return commonElements;
}


//1.Write a function that takes two numbers as arguments and returns their sum.
function addition(x,y){
    return x+y;
}

let value=addition(3,78);
console.log(value); 

///////////////////////////////////


const sum=(a,b)=>{
    return a+b;
}

console.log(sum(3,6));

//////////////////////////////////////

let marks={
    harry:35,
    gnya:46,
    shree:78,
    shubhood:95
};

for(let key in marks){
    console.log("the marks of " + key + " are "  + marks[key]);
}

/////2.Write a function that takes a string as an argument and returns its length.

const len= (x)=>{
      return x.length;
};

var length1= "Babber";
console.log(len(length1));


//3.Write a program that takes two numbers and displays their sum, difference, product, and quotient.

const cal=(a,b)=>{
    console.log (a+b)
    console.log (a-b) 
    console.log (a/b)
    console.log (a*b)
}

console.log(cal(6,5));

//4.Write a function that takes two numbers as arguments and returns the larger number.

const largenum=(p,r)=>{
    if(p>r){
        return p;
    }
    else{
        return r;
    }
};

console.log(largenum(12,9));

//5.Write a program that displays a string in reverse order.

const reversestr=(name)=>{
   let i= name.split('');
     i.reverse();
     i.join('');
     console.log(i);
}

var naam="RANJITA";
console.log(reversestr(naam));

///6.Write a program that takes a number and checks whether it is positive, negative, or zero.

const NumValidation=()=>{
    if (num>0){
        console.log("positive");
    }
    else if(num<0){
        console.log("Negative");
    }
    else{
        console.log("zero");
    }
}

var num=0;
NumValidation(num);

//7.Write a program that takes a number and prints the multiplication table for that number.

    let prd=36;
    for(let i=1;i<=10;i++){
        let n=prd*i;
       console.log(n);
    }

//8.Write a program that takes a number and calculates the sum of all numbers from 1 to that number.

const addition1=(n)=>{
    var sumation=0;
    for(let i=1;i<=n;i++){
        var sumation=sumation+i;
       
    }
    console.log(sumation);
}
addition1(9);

//9.Write a program that takes a string and prints out the number of vowels in the string.

// function countvowels(str){
//     let vowel=["a","e","i","o","u"];
//     let count=0;
//     for(let i=0;i<str.length();i++){
//         if(vowel.includes(str[i].toLowerCase())){
//             count++;
//        }
//     }
//     return count;
// }
// console.log(countvowels("CodeHelp")); 

function countVowels(str) {
    // define an array of vowels
    const vowels = ["a", "e", "i", "o", "u"];
    let count = 0;
  
    // loop through each character in the string
    for (let i = 0; i < str.length; i++) {
      // check if the character is a vowel
      if (vowels.includes(str[i].toLowerCase())) {
        count++;
      }
    }
  
    // return the number of vowels
    return count;
  }
  
  // test cases
  console.log(countVowels("CodeHelp"))

  //9.For example, given the arrays [1, 2, 3, 4, 5] and [3, 4, 5, 6, 7], the function should return [3, 4, 5].

  function Findcommonele(arr1,arr2){
    let common_ele=[];
    for(let i=0;i<arr1.length;i++){
        if(arr2.includes(arr1[i])){
            if(!common_ele.includes(arr1[i])){
               common_ele.push(arr1[i]);
            }
        }
    }

    common_ele.sort((a, b) => a - b);

    // Return the commonElements array
    return common_ele;
}


  const arr1=[1,2,3,4,5,6];
  const arr2=[3,4,5,6,7];

  const commonelement=Findcommonele(arr1,arr2);
  console.log(commonelement);


  



