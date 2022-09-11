// CSCI 1300 Fall 2022
// Author: Tyler Onstad-Cran
// Recitation: 305 – Nikhith Sannidhi
// Homework 2 - Problem #4

#include <iostream>

using namespace std;

int main(){

    //initialize variables for snow level at each location, giving them correct initial values
    int Breckenridge = 25;
    int Vail = 28;
    int Copper_Mountain = 40;
    //initialize days variable to store future user input
    int days;
    //prompt user to input the number of days to predict for
    cout << "How many days in the future would you like a prediction for?" << endl;
    //store user input in the days variable
    cin >> days;
    //output the number of days times the rate of snowfall change that is given for each resort
    cout << "Breckenridge will have " << Breckenridge + 5 * days << " inches, Vail will have "
        << Vail + 12 * days << " inches, and Copper Mountain will have " << 
        Copper_Mountain + 2 * days << " inches." << endl;
    
    return 0;
}