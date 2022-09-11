// CSCI 1300 Fall 2022
// Author: Tyler Onstad-Cran
// Recitation: 305 – Nikhith Sannidhi
// Homework 2 - Problem #3

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    //initialize dimension variables
    double length;
    double height;
    //initialize variable to store the final ounces number
    double ounces;
    //prompt user for input of side length
    cout << "What is the side length of the base of the carton in inches?" << endl;
    //store user input in length variable
    cin >> length;
    //prompt user for input of height
    cout << "What is the height of the carton in inches?" << endl;
    //store user input in height variable
    cin >> height;
    //use given formula to convert the volume in cubic inches to ounces
    ounces = length * length * height * .55;
    //output the number of ounces using setprecision to make it 1 number after the decimal
    cout << fixed << setprecision(1) << "The carton has a volume of " << ounces << " ounces." << endl;

    return 0;
}