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
