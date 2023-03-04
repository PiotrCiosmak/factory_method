//
// Created by PiotrCiosmak on 04.03.2023.
//

#ifndef FACTORY_METHOD_CREATOR_HPP
#define FACTORY_METHOD_CREATOR_HPP


#include "../../products/product/Product.hpp"

class Creator
{
public:
    virtual ~Creator();

    virtual Product *factoryMethod() const = 0;

    std::string someOperation() const;
};


#endif //FACTORY_METHOD_CREATOR_HPP
