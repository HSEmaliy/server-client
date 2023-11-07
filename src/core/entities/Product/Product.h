#ifndef SERVER_CLIENT_PRODUCT_H
#define SERVER_CLIENT_PRODUCT_H
#include <iostream>
#include "../Сategory/Сategory.h"

class Product{
public:
    Product(long long id, const std::string& name, int price, const std::string &description, const Category& category):
            id(id), name(name), price(price), description(description), category(&category){}
private:
    long long id;
    std::string name;
    int price;
    std::string description;
    const Category* category;
};
#endif //SERVER_CLIENT_PRODUCT_H
