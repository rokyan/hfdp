#include "HasQuarterState.hpp"

#include <iostream>

namespace hfdp::state
{

HasQuarterState::HasQuarterState(GumballMachine* machine)
    : machine{ machine }
    , gen{ rd() }
    , dist{ 1, 10 }
{}

void HasQuarterState::insertQuarter()
{
    std::cout << "You can't insert another quarter" << std::endl;
}

void HasQuarterState::ejectQuarter()
{
    std::cout << "Quarter returned" << std::endl;

    machine->setState(StateIdentifier::NO_QUARTER);
}

void HasQuarterState::turnCrank()
{
    std::cout << "You turned..." << std::endl;

    if (dist(gen) == 1 && machine->getCount() > 1)
    {
        machine->setState(StateIdentifier::WINNER);
    }
    else
    {
        machine->setState(StateIdentifier::SOLD);
    }
}

void HasQuarterState::dispense()
{
    std::cout << "No gumball dispensed" << std::endl;
}

void HasQuarterState::refill()
{
}

const std::string HasQuarterState::getDescription() const
{
    return "waiting for turn of crank";
}

} // namespace hfdp::state