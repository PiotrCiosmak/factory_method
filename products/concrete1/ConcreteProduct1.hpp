//
// Created by PiotrCiosmak on 04.03.2023.
//

#ifndef FACTORY_METHOD_CONCRETEPRODUCT1_HPP
#define FACTORY_METHOD_CONCRETEPRODUCT1_HPP

#include "../product/Product.hpp"

class ConcreteProduct1 : public Product
{
public:
    std::string Operation() const override;
};


#endif //FACTORY_METHOD_CONCRETEPRODUCT1_HPP
