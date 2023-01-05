#include "SoldOutState.hpp"

#include <iostream>

namespace hfdp::state
{

SoldOutState::SoldOutState(GumballMachine* machine)
    : machine{ machine }
{}

void SoldOutState::insertQuarter()
{
    std::cout << "You can't insert a quarter, the machine is sold out" << std::endl;
}

void SoldOutState::ejectQuarter()
{
    std::cout << "You can't eject, you haven't inserted a quarter yet" << std::endl;
}

void SoldOutState::turnCrank()
{
    std::cout << "You turned, but there are no gumballs" << std::endl;
}

void SoldOutState::dispense()
{
    std::cout << "No gumball dispensed" << std::endl;
}

void SoldOutState::refill()
{
    machine->setState(StateIdentifier::NO_QUARTER);
}

const std::string SoldOutState::getDescription() const
{
    return "sold out";
}

} // namespace hfdp::state