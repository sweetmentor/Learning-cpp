#include <iostream>
#include <cmath>


using namespace std;

// int main() 
// {
//     int num1, num2;
//     cout << "Enter first number: ";
//     cin >> num1;
    
//     cout << "Enter second number: ";
//     cin >> num2;
    
//     cout << num1 + num2;

// int main()
// {
//     double num1, num2;
//     cout << "Enter first number: ";
//     cin >> num1;
    
//     cout << "Enter second number: ";
//     cin >> num2;
    
//     cout << num1 + num2;
    
//     return 0;
// }


int main()
{
    double num1, num2;
    char op;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    double result;
    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
       result = num1 - num2;  
    } else if(op == '/'){
       result = num1 / num2;  
    } else if(op == '*'){
       result = num1 * num2;  
    } else {
        cout << "invalid operator";
    }
    
    cout << " Answer is: " << result;
    
    return 0;
}
