// CSCI 1300 Fall 2022
// Author: Tyler Onstad-Cran
// Recitation: 305 – Nikhith Sannidhi
// Homework 2 - Problem #6

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    //initialze double x for user input
    double x;
    //prompt user for input
    cout << "Enter a value for x:" << endl;
    //store user input in variable x
    cin >> x;
    //using cmath, calculate the sigmoid using the sigmoid formula
    double sigmoid = 1 / (1 + exp(-x));
    //output the result of the sigmoid calculation
    cout << "The sigmoid for x=" << x << " is " << sigmoid << endl;

    return 0;
}