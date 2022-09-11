// CSCI 1300 Fall 2022
// Author: Tyler Onstad-Cran
// Recitation: 305 – Nikhith Sannidhi
// Homework 2 - Problem #5

#include <iostream>

using namespace std;

int main(){

    //initialize initial bolts variable for user input
    int bolts;
    //prompt user for input on number of bolts
    cout << "Enter the number of Bolts:" << endl;
    //store user input in bolts variable
    cin >> bolts;
    //calculate the number of gems
    int gems = bolts / 299;
    //subtract the bolts that were used in the gems variable
    bolts -= gems * 299;
    //calculate the number of gold coins that can be made using the remaining bolts
    int gold_coins = bolts / 23;
    //subtract the bolts used in the gold coins variable
    bolts -= gold_coins * 23;
    //output the number of gems, gold coins, and bolts that are now stored in the variables
    cout << gems << " Gem(s) " << gold_coins << " GoldCoin(s) " << bolts << " Bolt(s)" << endl;

    return 0;
}