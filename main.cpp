#include <iostream>
#include "creators/creator/Creator.hpp"

using namespace std;

void clientCode(const Creator &creator);

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void clientCode(const Creator &creator)
{
    cout << "Client: I'm not aware of the creator's class, but it still works.\n" << creator.someOperation() << endl;
}