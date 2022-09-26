//
// Created by Even Tuverud on 16/09/2022.
//

#include <fstream>
#include "iostream"
using namespace std;


void read_temperatures(double temperatures[], int length);


const char filePath[] = "/Users/eventu/Documents/Programming/School/C++/Assignments/Assignment1/temperatures.dat";



int main(){
    cout << "Velkommen!\n";

    const int tableSize = 5; //number of temperatures
    double table[tableSize];
    int low = 0;
    int medium = 0;
    int high = 0;

    read_temperatures(table, tableSize);

    for (int i = 0; i < tableSize; ++i) {
        double x = table[i];
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




}


void read_temperatures(double temperatures[], int length) {
    // her plasserer du koden i funksjonen, vi sier at vi definerer funksjonen
    ifstream
    file;
    file.open(filePath);

    if (!file){
        cout << "Finner ikke fil";
        exit(EXIT_FAILURE);
    } else  {
        cout << "Leser fra fil\n";
        double temp;
        for (int i = 0; i < length && file >> temp; ++i) {
            temperatures[i] = temp;
            //cout << temp;
        }

    }
    file.close();
}

