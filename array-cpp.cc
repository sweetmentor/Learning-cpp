#include <iostream>
#include <cmath>


using namespace std;

// void sayHi (string name, int age) {
//     cout << "Hello " << name << " You are " << age << "years old." << endl; 
// }

// int main()

// {
//     // int luckyNums [] = {4, 8, 10, 15, 16, 20, 22, 42};
    
//     // luckyNums[0] = 18;
    
//     // cout << luckyNums [0];
    
//     sayHi("Mike", 50);
//     sayHi("Stephen", 60);
//     sayHi("Huege", 20);
    
    
//     return 0;
// }

// Indexes are use to asses the number in an array.-------

// ------callBack function-----
// void sayHi (string name, int age);

// int main()

// {

//     sayHi("Mike", 50);
//     sayHi("Stephen", 60);
//     sayHi("Huege", 20);
    
    
//     return 0;
// }

// void sayHi (string name, int age) {
//     cout << "Hello " << name << " You are " << age << "years old." << endl; 
// }

//----- function to find the cube of a number-----

// double cube(double num) {
//      return num * num * num;
     
// }

// int main()

// {
  
//     cout << cube(5.0);

    
    
//     return 0;
// }

// ------if statement---------

// int main()

// {
//     bool isMale = false;
//     bool isTall = false;
    
    // if(isMale && isTall) {
    //     cout << "FizzBuzz";
    // } else {
    //     cout << "fizz";
    // }
  
  
//   ------|| is either of the conditions-------
    //  if(isMale || isTall) {
    //     cout << "FizzBuzz";
    // } else {
    //     cout << "fizz";
    // }
   
    // if(isMale && !isTall) {
    //     cout << "Fizz";
    // } else if (!isMale && isTall) {
    //     cout << "buzz";
    // } else if (isMale && isTall) {
    //     cout << "fizzBuzz";
    // } else {
    //     cout << "you are not a male";
    // }
    
//       return 0;
// }
    
    // ____Using comparisons inside if statemen-----
    
// int getMax (int num1, int num2) {
//     int result;
    
//     if(num1 > num2) {
//         result = num1;
//     } else {
//         result = num2;
//     }
//     return result;
// }

 
// int main()

// {
//     cout << getMax(3, 8);
    
//     return 0;
// }

int getMax (int num1, int num2, int num3) {
    int result;
    
    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

 
int main()

{
    cout << getMax(30, 30, 2);
    
    return 0;
}