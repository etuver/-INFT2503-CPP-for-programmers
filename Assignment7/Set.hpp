#pragma once
#include "vector"
#include "iostream"
#include "string"
#ifndef ASSIGNMENT7_SET_HPP
#define ASSIGNMENT7_SET_HPP

using namespace std;


class Set {
private:
public:
    vector<int> table;
    Set();
    Set(Set const &set) = default;
    Set& operator=(const  Set &other);
    Set &operator+=( int number) ;
    Set operator+(const Set &other) const;
    bool exist(int number) const;
    friend ostream &operator<<(ostream &os, const Set &set);


};



#endif //ASSIGNMENT7_SET_HPP
