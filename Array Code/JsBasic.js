// create a counter in js (counts down from 30 to  0)

// let counter = 30;

// const CountInterval = setInterval( ()=>
// {
//   console.log(counter);
//   counter--;
//   if(counter < 0)
//   {
//     clearInterval(CountInterval);
//   }
// },1000)

// Q.2 calculate the times it takes between a setTimeOut call and the inner function actually running code in js
// let startTime= performance.now();
//  setTimeout(() => {
//     let LastTime=performance.now();
//     let timeElpased = LastTime- startTime;
//     console.log('Time elapsed'+timeElpased ,'milisecond')
// },1000);


//q.3 create a terminal clock hh:mm:ss

// function pad(number) {
//     return number < 24 ? '0' + number : number;
// }

// function displayTime() {
//     const now = new Date();
//     const hours = pad(now.getHours());
//     const minutes = pad(now.getMinutes());
//     const seconds = pad(now.getSeconds());

//     console.clear();
//     console.log(`${hours}:${minutes}:${seconds}`);
// }

// setInterval(displayTime, 1000);

function FindIndexof(str,Target)    // this is the code of the finding the some string value in the Given index 
{
    console.log("Index:",str.indexOf(Target));
}

const ans= FindIndexof("Rajan Sharma","h")

function log2()
{
    console.log("sona hai mujhe")    // function call back   function calling function 
}

function fn(hi)
{
    hi();
}
fn(log2);


// now talk about the classes in js 

// class Animal
// {
//    constructor(name,leg,speaks)
//    {
//      this.name=name;
//      this.leg= leg;
//      this.speaks=speaks;
//    }

//    speak()
//    {
//     console.log("Hi there" + this.speaks);
//    }
// }
// let dog= new Animal("dog",4," bhow bhow");  //this is how we create the object
// let cat= new Animal("cat",4," Meow Meow");

// cat.speak()   // and call the function wiht help of constructor
// dog.speak();
// Function inside the other function 


// function square(n)

// {
//     return n*n;
// }

// function sumOfSquare(a,b)    // above we declare the  one function and we declare the one anothe function under the second function we created 
// {
//     const val1= square(a);
//     const val2=square(b);
//     return val1 + val2;
// }

// const pow = sumOfSquare(5,5);
// console.log(pow);



    // callback functions 

    // function square(n)
    // {
    //     return n*n;
    // }

    // function cube(n)
    // {
    //     return n*n*n;    // dumb  way 
    // }

    // function sumOfSquare(a,b)
    // {
    //     const val1= square(a);
    //     const val2 = cube(b);
    //     return val1 + val2;
    // }

    // const pow= sumOfSquare(2,2);
    // console.log(pow);


    //let's write the good solution 

    // function square(n)
    // {
    //     return n*n*n*n;
    // }                //function callback means is that we don't have to write function again and again like i created something function here 
    //                 // we can create as many we want like square function i created this is function callBack

    // function something(a,b,fn)
    // {
    //     const val1= fn(a);
    //     const val2 = fn(b);
    //     return val1 + val2;
    // }

    // const pow= something(10,2,square);
    // console.log( pow);


    // function findsum(n)   //Asynchronous function
    // {
    //     let ans=0;
    //     for( let i=0;i<n;i++)
    //     {
    //         ans+= i;
    //     }
    //     return ans;
    // }
    // function findsumtill100()
    // {
    //     return findsum(100);
    // }

    // setTimeout(findsumtill100,4000);  //This line is the asynchronous function 
    // console.log("Hello world")

//More one code of async await code 

function RajanWork()
{
    let p= new Promise(function(resolve)
    {
        setTimeout(function()
        {
            resolve("Heloo Mother Father");
        },3000)
        
    })
    return p;
}

async function main()
{
    const val= await RajanWork();
    console.log(val);
}

main();
console.log("After Main")
