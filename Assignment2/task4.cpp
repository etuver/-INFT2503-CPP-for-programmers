//
// Created by Even Tuverud on 19/09/2022.
//
int main(){
    int a = 5;
    int &b = a; // En referanse (& på venstreside) kan ikke erklæres uten at vi forteller hvilken variable den refererer til.
    int *c;
    c = &b;
    a = b + *c; //Dereferensoperatoren * fjernes fra a og b da den ikke kan brukes
    b = 2; // &b er adressen til b og kan ikke endres. fjernes &, slik at verdien til b endres istedet .
}

