//
// Created by Even Tuverud on 19/09/2022.
//

#include <iostream>

using namespace std;

int main(){

    double number;
    double *pointer = &number;
    double &reference = number;


    cout << "nummer før tilordnet verdi: " << number <<endl;

    number = 1337;

    cout << "nummer endret via variabel: " << number <<endl;

    reference = 2022;

    cout << "nummer endret via referanse: " << number <<endl;

    *pointer = 100.001;
    cout << "nummer endret via pointer: " << number <<endl;


}






