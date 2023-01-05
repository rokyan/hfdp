#include "SoldState.hpp"

#include <iostream>

namespace hfdp::state
{

SoldState::SoldState(GumballMachine* machine)
    : machine{ machine }
{}

void SoldState::insertQuarter()
{
    std::cout << "Please wait, we're already giving you a gumball" << std::endl;
}

void SoldState::ejectQuarter()
{
    std::cout << "Sorry, you already turned the crank" << std::endl;
}

void SoldState::turnCrank()
{
    std::cout << "Turning twice doesn't get you another gumball!" << std::endl;
}

void SoldState::dispense()
{
    machine->releaseBall();

    if (machine->getCount() > 0)
    {
        machine->setState(StateIdentifier::NO_QUARTER);
    }
    else
    {
        std::cout << "Oops, out of gumballs!" << std::endl;

        machine->setState(StateIdentifier::SOLD_OUT);
    }
}

void SoldState::refill()
{
}

const std::string SoldState::getDescription() const
{
    return "dispensing a gumball";
}

} // namespace hfdp::state