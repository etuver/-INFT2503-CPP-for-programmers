#include <iostream>

using namespace std;

int main() {

    const int length = 5; //number of temperatures

    int low = 0;
    int medium = 0;
    int high = 0;


    std::cout << "Skriv inn " << length <<" temperaturer:" <<endl;
    for (int i = 0; i < length; ++i) {
        double x ;
        cin >> x;
        cout << "Temperatur nr: " << x << endl;
        if (x < 10){
            low++;
        } else if ( 10 <= x && x <= 20){
            medium++;
        } else {
            high++;
        }
    }

    std::cout << "Antall under 10 er " << low << endl;
    std::cout << "Antall mellom 10 og 20 er " << medium << endl;
    std::cout << "Antall over 20 er " << high << endl;

    return 0;
}
