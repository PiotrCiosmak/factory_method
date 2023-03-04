#include <iostream>
#include "creators/creator/Creator.hpp"
#include "creators/concrete1/ConcreteCreator1.hpp"
#include "creators/concrete2/ConcreteCreator2.hpp"

using namespace std;

void clientCode(const Creator &creator);

int main()
{
    cout << "App: Launched with the ConcreteCreator1.\n";
    Creator *creator1 = new ConcreteCreator1();
    clientCode(*creator1);

    cout << endl;

    cout << "App: Launched with the ConcreteCreator2.\n";
    Creator *creator2 = new ConcreteCreator2();
    clientCode(*creator2);

    delete creator1;
    delete creator2;
}

void clientCode(const Creator &creator)
{
    cout << "Client: I'm not aware of the creator's class, but it still works.\n" << creator.someOperation() << endl;
}