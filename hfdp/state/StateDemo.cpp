#include "StateDemo.hpp"
#include "GumballMachine.hpp"

#include <iostream>

namespace hfdp
{

void StateDemo::run() const
{
    using namespace state;

    GumballMachine machine{ 10 };

    std::cout << machine << std::endl;

    for (auto attempt = 0; attempt < 5; attempt++)
    {
        machine.insertQuarter();
        machine.turnCrank();
        machine.insertQuarter();
        machine.turnCrank();

        std::cout << std::endl << machine << std::endl;
    }

    machine.refill(2);

    std::cout << std::endl << machine << std::endl;

    machine.insertQuarter();
    machine.turnCrank();

    std::cout << std::endl << machine << std::endl;
}

const std::string StateDemo::getName() const
{
    return "State";
}

} // namespace hfdp