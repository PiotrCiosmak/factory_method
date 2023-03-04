//
// Created by PiotrCiosmak on 04.03.2023.
//

#include <string>
#include "Creator.hpp"

using namespace std;

Creator::~Creator()
{}

string Creator::someOperation() const
{
    // Call the factory method to create a Product object.
    Product *product = this->factoryMethod();

    // Now, use the product.
    string result = "Creator: The same creator's code has just worked with " + product->Operation();
    delete product;
    return result;
}
