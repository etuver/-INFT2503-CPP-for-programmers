//
// Created by Even Tuverud on 24/10/2022.
//

#include <iostream>

using namespace std;

template <typename Type>
bool equal(Type a, Type b){
    cout << "Template Version: " << endl;
    return a == b;
}

bool equal(double a, double b){
    cout << "Special Version:" << endl;
    const double precision = 0.00001;
    return abs(a-b) < precision;

}





int main() {
    cout <<" Øving 8: " << endl;
    cout << "\nLike: " << endl;
    cout << equal("abc", "abc") << endl;
    cout << equal(0.12345, 0.12345) <<endl;

    cout << "\nUlike: " << endl;
    cout << equal("abc", "abcd") << endl;
    cout << equal(0.1, 0.2) << endl;

}
