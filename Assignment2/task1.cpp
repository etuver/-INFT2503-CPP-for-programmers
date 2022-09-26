//
// Created by Even Tuverud on 19/09/2022.
//

#include <iostream>

using namespace std;

int main() {
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "Oppgave a:" <<endl;
    cout << "i: adresse: " << &i << ", innhold: "<< i << endl;
    cout << "j: adresse: " << &j << ", innhold: "<< j << endl;
    cout << "p: adresse: " << &p << ", innhold: "<< p << endl;
    cout << "q: adresse: " << &q << ", innhold: "<< q << endl;

    cout << "oppgave b: " << endl;
    cout << "Skal skrive 8 og 8 :" << endl;
    *p = 7;
    *q += 4;
    *q = *p + 1;
    p = q;
    cout << *p << " " << *q << endl;
}
