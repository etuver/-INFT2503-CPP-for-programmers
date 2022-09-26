//
// Created by Even Tuverud on 19/09/2022.
//

#include <iostream>

using namespace std;

int find_sum(const int *table, int length);


int main() {

   const int tablesize = 20;
   int table[tablesize];

    for (int i = 0; i < tablesize; ++i) {
        table[i] = i+1;
    }

    int first10 = find_sum(table, 10);
    int next5 = find_sum(table+10, 5 );
    int last5 = find_sum(table + tablesize -5, 5);

    cout << "Sum de første 10 tallene: " << first10 <<endl;
    cout << "Sum de fem neste: " << next5 <<endl;
    cout << "Sum de siste fem tallene: " << last5 <<endl;

}

int find_sum(const int *table, int length){
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += table[i];
    }
    return sum;


}



