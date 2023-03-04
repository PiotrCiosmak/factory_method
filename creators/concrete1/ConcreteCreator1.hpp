//
// Created by PiotrCiosmak on 04.03.2023.
//

#ifndef FACTORY_METHOD_CONCRETECREATOR1_HPP
#define FACTORY_METHOD_CONCRETECREATOR1_HPP

#include "../creator/Creator.hpp"
#include "../../products/concrete1/ConcreteProduct1.hpp"

class ConcreteCreator1 : public Creator
{
public:
    Product* factoryMethod() const override;
};


#endif //FACTORY_METHOD_CONCRETECREATOR1_HPP
