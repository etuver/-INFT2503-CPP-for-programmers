//
// Created by Even Tuverud on 24/10/2022.
//
#include "iostream"
using namespace std;

template <typename Type, typename AnotherType> // Tar inn to typer
class Pair {
public:
    Type first;
    AnotherType second;
    Pair(Type first_, AnotherType second_): first(first_), second(second_){};

    // Legge sammen
    Pair operator+(const Pair &other) const{
        Pair pair = *this;
        pair.first += other.first;
        pair.second += other.second;
        return pair;
    }

    //Større enn annen
    bool operator>(const Pair &other) const{
        Pair pair = *this;
        auto a = pair.first + pair.second;
        auto b = other.first + other.second;
        return a > b;
    }



};





int main() {
    Pair<double, int> p1(3.5, 14);
    Pair<double, int> p2(2.1, 7);
    cout << "p1: " << p1.first << ", " << p1.second << endl;
    cout << "p2: " << p2.first << ", " << p2.second << endl;

    if (p1 > p2)
        cout << "p1 er størst" << endl;
    else
        cout << "p2 er størst" << endl;

    auto sum = p1 + p2;
    cout << "Sum: " << sum.first << ", " << sum.second << endl;
}

/* Utskrift:
p1: 3.5, 14
p2: 2.1, 7
p1 er størst
Sum: 5.6, 21
*/