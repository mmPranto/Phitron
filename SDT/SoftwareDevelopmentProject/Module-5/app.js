var test='Hello World';
var abc='Dug Dugi';
var x= 5;
var status = true;
var obj = {
    name:"pranto",
};

console.log(test);
console.log(abc);
console.log(typeof test);
console.log(typeof x);
console.log(typeof status);
console.log(typeof  obj);

//converted into number
console.log("----------------------Parse float and Parse Int----------------------");

var num="12.5";
var num1=15;
var  convertedNum=parseFloat(num);
var convertedNumToInt=parseInt(num);

var result= num+num1;
var result1=convertedNum+num1;
var result2=convertedNumToInt+num1;



console.log(typeof num);
console.log(result); //12.515
console.log(typeof result);
console.log(result1);
console.log(typeof result1);
console.log(result2);
console.log(typeof  result2);



console.log("----------------------if else statement-----------------------");
//if else statement
var Status = "gorom";

if(Status=="rain"){
   console.log("bristi hocche tai Bahire jaoa jabe na"); 
}
else if(Status=="gorom"){
    console.log("onek gorom bahire jaoa jabe na");
}
else{
    console.log("Bahire jaoa jabe");
}



// 0 -39 C
// 40 - 59 B
// 60-69 A-
// 70-79 A
// 80-100 A+

var marks=-30;

if(marks<0 ){
    console.log("Failed");
}
else if(marks>=0 && marks<=39){
    console.log("C");
}
else if(marks>=40 && marks<=59){
    console.log("B");
}
else if(marks>=60 && marks<=69){
    console.log("A-");
}
else if(marks>=70 && marks<=79){
    console.log("A");
}
else if(marks>=80 && marks<=100){
    console.log("A+");
}
else{
    console.log("Invalid Number");
}


console.log("--------------------------------------------------------------Objcet----------------------------------------------------------");


var result = 80;

var person = {
    hand: 2,
    eye: 2,
    hair: "Don't know",
    friend: result,
    father : {
        name: "john",
        age: 20
    }

}
console.log(person.hand);
console.log(person.eye);
console.log(person.hair);
console.log(person.friend);
console.log(person.father.age);
console.log(person.father);


console.log("------------------------------------------Array----------------------------------------------");

var test = "Test";

var friends = [
    "Hero", 5, "Alom", test, { name: "Kashem", age: 50 }, ["Rahim", "Karim"]
];

console.log(friends);
console.log(friends.length);
console.log(friends[2]);
friends.pop();
friends.push("Pranto");

console.log(friends);
friends.shift();
friends.unshift("Minhaz");
console.log(friends);

console.log("----------------------------------------Loop----------------------------------------");

var test = "Test";
var friends = ["Hero", 5, "Alom", test, { name: "John" }, ["rahim", "karim"], "jobber"];
for (var i = 0; i < friends.length; i++){
    // console.log(friends[i]);
    // console.log(i);
    var element = friends[i];
    if (element == "ALom") {
        console.log("yes, sir");
    }
    else {
        console.log("No,sir");
    }
}


var array = ["Hero", 5, "Alom", test, { name: "John" }, ["rahim", "karim"], "jobber"];
for (var index = 0; index < 20; index++){
    var element = index;
    console.log(element);

}


console.log("-----------------------------------function--------------------------------");


function sum(num1,num2) {
    // console.log("Hello");
    var result = num1 + num2;
    console.log(result);
}



sum(20,30);
