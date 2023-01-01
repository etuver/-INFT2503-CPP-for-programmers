#include "fraction.hpp"
#include <iostream>
#include <string>
#include "Set.hpp"

using namespace std;

void print(const string &text, const Fraction &broek) {
    cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
    Fraction a(10, 20);
    Fraction b(3, 4);
    Fraction c;
    c.set(5);
    Fraction d = a / b;

    print("a = ", a);
    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    b += a;
    ++c;
    d *= d;

    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    c = a + b - d * a;
    c = -c;

    print("c = ", c);

    if (a + b != c + d)
        cout << "a + b != c + d" << endl;
    else
        cout << " a + b == c + d" << endl;
    while (b > a)
        b -= a;
    print("b = ", b);




    //Task1

    Fraction fraction1(4,5);
    print("Fraction1: ", fraction1);
    //fraction1 - 5;
    print("Fraction1 - 5: ", fraction1 - 5);
    print("5 - fraction1: ", 5 - fraction1 );

    cout  <<endl <<endl;
    cout << "--- Task2 ----"  <<endl;
    //Task2
    Set set1;
    set1 +=1;
    set1 +=2;
    set1 +=3;
    set1 +=2;
    cout <<"set1: " << set1 << endl;


    Set set2 ;
    set2 +=2;
    set2 +=3;
    set2 +=6;
    set2 += 8;
    set2 += 9;
    cout << "Set 2: " << set2 << endl;

    Set set3 = set1 + set2;
    cout << "Set3: " << set3 << endl;
}


