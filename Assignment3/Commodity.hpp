#pragma once  //unngå redeklarering ved flere bruk

#include <string>

using namespace std;

class Commodity{
public:
    Commodity(const string &name, long id, double price);
    const string &get_name() const;
    long get_id() const;
    double get_price() const;
    double get_price(const double &quantity) const;
    double get_price_with_sales_tax(const double &quantity) const;
    void set_price(const double &price);

private:
    string name;
    int id;
    double price;
};
