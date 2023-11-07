#ifndef SERVER_CLIENT_USERREPOSITORY_H
#define SERVER_CLIENT_USERREPOSITORY_H
#include <iostream>
#include <vector>
#include "../../entities/User/User.h"
#include "../dto.h"

class UserRepository{
public:
    void addUser(const UserDTO&);
    void removeUser(int id);
    void updateUser(const UserDTO&);
    const User& getUser(int id);
    std::vector<const User*> getAllUser();
};
#endif //SERVER_CLIENT_USERREPOSITORY_H
