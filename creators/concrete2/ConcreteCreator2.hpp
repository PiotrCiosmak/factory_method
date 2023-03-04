//
// Created by PiotrCiosmak on 04.03.2023.
//

#ifndef FACTORY_METHOD_CONCRETECREATOR2_HPP
#define FACTORY_METHOD_CONCRETECREATOR2_HPP

#include "../creator/Creator.hpp"

class ConcreteCreator2 : public Creator
{
public:
    Product *factoryMethod() const override;
};


#endif //FACTORY_METHOD_CONCRETECREATOR2_HPP
