//
// Created by PiotrCiosmak on 04.03.2023.
//

#include "ConcreteCreator2.hpp"
#include "../../products/concrete2/ConcreteProduct2.hpp"

Product *ConcreteCreator2::factoryMethod() const
{
    return new ConcreteProduct2();
}
