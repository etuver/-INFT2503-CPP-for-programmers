//
// Created by Even Tuverud on 24/09/2022.
//
#include "Commodity.hpp"
#include <string>

using namespace std;

const double tax = 0.25;

Commodity::Commodity(const string &name, long id, double price) : name(name), id(id), price(price)  {}

const string &Commodity::get_name() const {
    return name;
}

long Commodity::get_id() const {
    return id;
}

double Commodity::get_price() const {
    return price;
}

void Commodity::set_price(const double &price_) {
    price = price_;
}


double Commodity::get_price(const double &quantity) const {
    return price * quantity;
 }

 double Commodity::get_price_with_sales_tax(const double &quantity) const {
     return price * quantity * (1 + tax);
}



