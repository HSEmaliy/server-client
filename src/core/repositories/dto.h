#ifndef SERVER_CLIENT_DTO_H
#define SERVER_CLIENT_DTO_H
#include <iostream>
#include "../entities/Сategory/Сategory.h"
#include "../entities/User/User.h"
#include "../entities/Product/Product.h"

struct UserDTO {
    long long id;
    std::string name;
    int dateRegis;
    int birthday;

    UserDTO(long long id, const std::string& name, int dateRegis, int birthday = 0) :
            id(id), name(name), dateRegis(dateRegis), birthday(birthday){}
};

struct ProductDTO {
    long long id;
    std::string name;
    int price;
    std::string description;
    const Category* category;

    ProductDTO(long long id, const std::string& name, int price, const std::string& description, const Category& category) :
                id(id), name(name), price(price), description(description), category(&category){}
};

struct CategoryDTO{
    std::string name;
    std::string description;

    CategoryDTO(const std::string& name, const std::string& description) : name(name), description(description){}
};

struct PaymentDTO{
    long long id;
    int price;
    std::string paymentStatus; // Добавить enum
    std::string paymentMethod; // Добавить enum
    const User* user;
    const Product* product;

    PaymentDTO(long long id, int price, const std::string& paymentStatus, const std::string& paymentMethod,
            const User& user,const Product& product) : id(id), price(price), paymentStatus(paymentStatus),
            paymentMethod(paymentMethod), user(&user), product(&product){}
};
#endif //SERVER_CLIENT_DTO_H
