#include "Set.hpp"
#include "iostream"
using namespace std;

Set::Set() {}

//Set::Set(Set const &old) {
//    *this = old;
//}

Set &Set::operator=(const Set &other) {
    table.clear();
    for (auto number : other.table ){
        table.emplace_back(number);
    }
    return *this;
}


Set &Set::operator+=(int number)  {
    //Set res = *this;
     if (!exist(number)){
        table.emplace_back(number);
    }
    return *this;
}

bool Set::exist(int number)const{
    for (size_t i = 0; i < table.size(); i++) {
        if (table[i] == number)
            return true;
    }
    return false;

}

Set Set::operator+(const Set &other) const {
    Set res;

    res = *this;

    for (auto number : other.table) {
        res += number;
    }
    return res;
}

ostream &operator<<(ostream &os, const Set &set) {
    os << "{ ";

    for (auto number : set.table) {
        os << number << " ";
    }
    os << "}";
    return os;
}



