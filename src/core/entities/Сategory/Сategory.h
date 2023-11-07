#ifndef SERVER_CLIENT_СATEGORY_H
#define SERVER_CLIENT_СATEGORY_H
#include <iostream>
class Category{
public:
    Category(const std::string& name, const std::string& description) : name(name), description(description){}
private:
    std::string name;
    std::string description;
};
#endif //SERVER_CLIENT_СATEGORY_H
