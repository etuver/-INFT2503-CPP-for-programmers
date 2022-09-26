//
// Created by Even Tuverud on 24/09/2022.
//

#include <string>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string word1;
    string word2;
    string word3;
    string sentence;
    string sentence2;

    cout << "Skriv ett ord:";
    cin >> word1;
    cout << "Skriv ett ord til:";
    cin >> word2;
    cout << "Skriv enda ett ord:";
    cin >> word3;
    sentence = word1 + " " + word2 + " " + word3 + "." ;
    cout << "setningen ble: " << sentence <<endl;
    sentence2 = sentence;

    for (int i = 9; i <12 ; ++i) {
        if (i > sentence2.length()){
            break;
        }
        sentence2[i] = 'x';
    }

    cout << "Sentence: " << sentence << endl;
    cout << "Sentence2: " << sentence2 << endl;

    string sentence_start;

    if (sentence.length() > 5){
        sentence_start = sentence.substr(0, 5);
    }

    cout << "Sentence_start: " << sentence_start << endl;


    if (sentence.contains('hallo')){
        cout << "Sentence inneholder hallo" << endl;
    } else{
        cout << "Sentence inneholder ikke hallo" << endl;
    }


    int wordCount = 0;
    string keyWord = "er";
    size_t found = sentence.find(keyWord);
    while (found != string::npos){
        wordCount ++;
        found = sentence.find(keyWord, found +1);
    }

    cout << "sentence inneholder " << keyWord << " " << wordCount << " ganger." << endl;


}