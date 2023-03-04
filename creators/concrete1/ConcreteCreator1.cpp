//
// Created by PiotrCiosmak on 04.03.2023.
//

#include "ConcreteCreator1.hpp"

Product *ConcreteCreator1::factoryMethod() const
{
    return new ConcreteProduct1();
}
