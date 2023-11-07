#ifndef SERVER_CLIENT_CATEGORYREPOSTORY_H
#define SERVER_CLIENT_CATEGORYREPOSTORY_H
#include <iostream>
#include <vector>
#include "../../entities/Сategory/Сategory.h"
#include "../dto.h"

class CategoryRepository{
public:
    std::vector<const Category*> getAllCategories();
    void removeCategory(int id);
    void updateCategory(const CategoryDTO&);
    const Category& getCategory(const std::string& name);
};

#endif //SERVER_CLIENT_CATEGORYREPOSITORY_H
