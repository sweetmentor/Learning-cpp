#include <iostream>
#include <cmath>


using namespace std;
int main() {
    // std::cout << "    /   |" << std::endl;
    // std::cout << "   /____|" << std::endl;
    // std::cout << "       /|" << std::endl;
    // std::cout << "      / |" << std::endl;
    // std::cout << "     /  |" << std::endl;
    // std::cout << "    /   |" << std::endl;
    // std::cout << "   /____|" << std::endl;
    // working with strings
    // string phrase = "Code Institute";
    // string phrasesub;
    // phrasesub = phrase.substr(8, 3);
    // cout << phrasesub;
    
    // working with numbers
    // cout << 5 + 2;
    // int wnu = 5;
    // double dnum = 5.5;
    // double sump = wnu + dnum;
    // cout << sump;
    
    // Getting user input
    // double age;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "You are " << age << " years old.";
    
    // string name;
    // cout << "What is your name? ";
    // cin >> name;
    // cout << "Your name is " << name ;
    
    string name;
    cout << "What is your name? ";
    getline (cin, name);
    
    cout << "Your name is " << name << " Hello " << name;
    
    
    return 0;
}

