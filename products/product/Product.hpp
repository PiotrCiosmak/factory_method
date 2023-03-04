//
// Created by PiotrCiosmak on 04.03.2023.
//

#ifndef FACTORY_METHOD_PRODUCT_HPP
#define FACTORY_METHOD_PRODUCT_HPP


#include <string>

class Product
{
public:
    virtual ~Product()
    {};

    virtual std::string Operation() const = 0;
};


#endif //FACTORY_METHOD_PRODUCT_HPP
