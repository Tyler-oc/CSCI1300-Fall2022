// CSCI 1300 Fall 2022
// Author: Tyler Onstad-Cran
// Recitation: 305 – Nikhith Sannidhi
// Homework 2 - Problem #2

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    //initialize name variable
    string name;
    //prompt user to enter name
    cout << "Please enter your name below: " << endl;
    //store user input in name variable
    getline(cin, name);
    //output user input
    cout << "Hello, " << name << "!" << endl;

    return 0;
}