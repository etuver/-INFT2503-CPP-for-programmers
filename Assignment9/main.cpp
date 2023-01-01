#include <iostream>
#include "vector"
#include "iostream"
#include "string"


using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table) {
    for (auto &e : table)
        out << e << " ";
    return out;
}

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    cout << "v1: " << v1 << endl;

    vector<int> v2 = {2, 3, 12, 14, 24};
    cout << "v2: " << v2 << endl;

    //Oppgave a
    auto pos = find_if(v1.begin(), v1.end(), [](int i){
        return i > 15;
    });
    cout << "Første element større enn 15 i v1 er " << v1[pos - v1.begin()] << " Som er på posisjon " << (pos - v1.begin()) << endl;

    //Oppgave b
    auto isEqual = equal(v1.begin(), v1.begin() + 5, v2.begin(), [](int a, int b){
        return abs(a - b) < 3;
    } );
    if (isEqual) cout << " De fem første tallene er omtrent like" << endl;
    else cout << "De fem første tallene er ikke omtrent like" << endl;


    auto isEqual2 = equal(v1.begin(), v1.begin() + 4, v2.begin(), [](int a, int b){
        return abs(a - b) < 3;
    } );
    if (isEqual2) cout << "De fire første tallene er omtrent like " << endl;
    else cout << "De fire første tallene er ikke omtrent like" << endl;


    // Oppgave c
    vector<int> newVector = {};
    newVector.resize(v1.size());
    replace_copy_if(v1.begin(), v1.end(), newVector.begin(), [](int i){
        return i%2 == 1;
    }, 100);

    cout << "Ny vektor: " << newVector << endl;



}
