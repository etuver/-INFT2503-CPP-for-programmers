//
// Created by Even Tuverud on 26/09/2022.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<double> numbers = {10.43,22.5,3.128,42.19,5.23};

    cout << "Front:" << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl;


    auto newValue = 1032.321;

    numbers.emplace( numbers.begin()+1, newValue);

    cout << "Front: " << numbers.front() << endl ;

    auto it = std::find(numbers.begin(), numbers.end(), newValue);

    if (it != numbers.end()){
        cout << "Fant " << newValue << " i vektoren." << endl;
    } else cout << "Fant ikke element " << newValue << " i vektoren.";

}