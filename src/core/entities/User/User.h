#ifndef SERVER_CLIENT_USER_H
#define SERVER_CLIENT_USER_H
#include <iostream>
#include <postgresql/soci-postgresql.h>
class User{
public:
    User(long long id, const std::string& name, int date_regis, int birthday = 0) :
            id(id), name(name), dateRegis(date_regis), birthday(birthday){}
private:
    long long id;
    std::string name;
    int dateRegis;
    int birthday;
};
#endif //SERVER_CLIENT_USER_H
