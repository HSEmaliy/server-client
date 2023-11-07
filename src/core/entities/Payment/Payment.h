#ifndef SERVER_CLIENT_PAYMENT_H
#define SERVER_CLIENT_PAYMENT_H
#include <iostream>
#include "../User/User.h"
#include "../Product/Product.h"

class Payment{
public:
    Payment(long long id, int price, const std::string& paymentStatus, const std::string& paymentMethod,
            const User& user,const Product& product) : id(id), price(price), paymentStatus(paymentStatus),
                                                       paymentMethod(paymentMethod), user(&user), product(&product){}
private:
    long long id;
    int price;
    std::string paymentStatus; // Добавить enum
    std::string paymentMethod; // Добавить enum
    const User* user;
    const Product* product;
};
#endif //SERVER_CLIENT_PAYMENT_H
