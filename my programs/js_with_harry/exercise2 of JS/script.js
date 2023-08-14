 
 //1. **Write a function called 'greet' that takes a name parameter and logs a greeting message to the console.**
 
 function print(naam){
    console.log(`hello, ${naam},hw are u!`);
 }

 let naam="gnyanu";
 print(naam);
 //2.Write a function called 'getSquare' that takes a number parameter and returns its square

 const getSquare=(side)=>{
       return side*side;
 }

 let side=7;
 console.log("suare of the area is "+ getSquare(side));


 //3.Write a function called 'countLetters' that takes a string parameter and returns an 
 //object that contains a count of each letter in the string.


//  const countLetters=(upnaam)=>{
//     var count=0;
//         for(let i=0;i<upnaam.length;i++){
//             console.log("this is my " + i + " string : " + upnaam[i]);
//             count++;
//         }
//         console.log("the total length of upnaam is " + count);
//  }

//  let upnaam='gnyaneshwari';

//  countLetters(upnaam);

function countLetters(str) {
    // Create an empty object to store the letter counts
    const counts = {};
  
    // Loop through each character in the string
    for (let i = 0; i < str.length; i++) {
      const char = str[i];
  
      // Check if the character is already in the counts object
      if (counts[char]) {
        // If it is, increment the count by 1
        counts[char]++;
      } else {
        // If it's not, add it to the object with a count of 1
        counts[char] = 1;
      }
    }
  
    // Return the counts object
    return counts;
  }
  
  // Example usage:
  const letterCounts = countLetters("WebDev,elopment");
  
  console.log(letterCounts);

  //4.Write a function called 'createCounter' that returns a function. The returned function should increment a counter variable
  // each time it is called and return the current count.
  
  let count1=0;
  function createCounter(){
     count1++;

    return count1;

  }

  console.log(createCounter());
  console.log(createCounter());
  console.log(createCounter());
  console.log(createCounter());
  console.log(createCounter());
  console.log(createCounter());
  console.log(createCounter());
  console.log(createCounter());

//5.Write a function called 'sumEvenNumbers' that takes an array of numbers as a parameter and returns the sum of all even numbers in the array.
function sumEvenNumbers(arr1){
      var sum=0;   
    for(let i=0;i<arr1.length;i++){    
        if(arr1[i]%2==0){
          sum=sum+arr1[i];
        }
    }
    return sum;
}

let arr1=[2,3,4,6,8,7,9,22,1,5];
console.log("the sum of even numbers in  array1 is : " +sumEvenNumbers(arr1));

//6.Write a function that takes an array of numbers as an argument and returns the sum of all the numbers in the array.

function sumOfNumbers(arr1){
    var sum1=0;   
  for(let i=0;i<arr2.length;i++){
        sum1=sum1+arr2[i];
      
  }
  return sum1;
}

let arr2=[2,3,4,6,8,7,9,22,1,5];
console.log("the sum of array2 is :"+ sumOfNumbers(arr2));

//7.  Write a function that takes an array of strings as an argument and returns a new array 
//with only the strings that have a length greater than 5.

function counter(str_arr){
    var count_array=[];

    for(let i=0;i<str_arr.length;i++){
        if(str_arr[i].length>5){
            count_array.push(str_arr[i]);
        }
    }
    return  count_array;
}
let str_arr=["apple", "banana", "kiwi", "watermelon", "orange"]
console.log(counter(str_arr));


//8.Write a function that takes an object and returns an array of all the keys in the object.

function getkeys(person){
    const keys=Object.keys(person);
   return keys;
}


const person = {
    name: "John",
    age: 30,
    gender: "male",
    city: "New York",
  };

 console.log(getkeys(person));

 //9.Write a function that takes an array of objects and returns an array of 
 //all the values of a specified property name.


 function getPropertyValues(arr, propName) {
    // Using Array.map() method to get the values of the specified property
    const values = arr.map((obj) => obj[propName]);
  
    return values;
  }
  
  // Test cases
  const people = [
    { name: "Pranay", age: 20, gender: "male" },
    { name: "Nidhi", age: 21, gender: "female" },
    { name: "Soumya", age: 21, gender: "male" },
  ];
  
  console.log(getPropertyValues(people, "name","age")); // ["Pranay", "Nidhi", "Soumya"]
  console.log(getPropertyValues(people, "age"));
  console.log(getPropertyValues(people, "gender"));
  console.log(getPropertyValues(people, "adress"));

  //10.