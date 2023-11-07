#ifndef SERVER_CLIENT_PRODUCTREPOSITORY_H
#define SERVER_CLIENT_PRODUCTREPOSITORY_H
#include <iostream>
#include <vector>
#include "../../entities/Product//Product.h"
#include "../dto.h"

class ProductRepository{
public:
    void addProduct(const ProductDTO&);
    void removeProduct(int id);
    void updateProduct(const ProductDTO&);
    const Product& getProduct(int id);
    std::vector<const Product*> getAllProducts();
};
#endif //SERVER_CLIENT_PRODUCTREPOSITORY_H
