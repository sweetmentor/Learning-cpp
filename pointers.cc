#include <iostream>

using namespace std;
    // --------Pointers = memory address on the computer RAM how to access--------
int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Stephen";
    string *pName = &name;
    
    // cout << pGpa;
    
    // -----De-refrencing a pointer - grabbing the actual value instead of the address---
    // just add a * to the cout instruction
    // cout << *pGpa;
    cout << &*&gpa;
    // cout << "Age: " << &age << endl;
    // cout << "gpa: " << &gpa << endl;
    // cout << "name: " << &name << endl;
    
    return 0;
}