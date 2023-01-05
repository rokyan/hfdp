#include "WinnerState.hpp"

#include <iostream>

namespace hfdp::state
{

WinnerState::WinnerState(GumballMachine* machine)
    : machine{ machine }
{}

void WinnerState::insertQuarter()
{
    std::cout << "Please wait, we're already giving you a gumball" << std::endl;
}

void WinnerState::ejectQuarter()
{
    std::cout << "Please wait, we're already giving you a gumball" << std::endl;
}

void WinnerState::turnCrank()
{
    std::cout << "Turning twice doesn't get you another gumball!" << std::endl;
}

void WinnerState::dispense()
{
    machine->releaseBall();

    if (machine->getCount() == 0)
    {
        machine->setState(StateIdentifier::SOLD_OUT);
    }
    else
    {
        machine->releaseBall();

        std::cout << "YOU'RE A WINNER! You get two gumballs for your quarter" << std::endl;

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
}

void WinnerState::refill()
{
}

const std::string WinnerState::getDescription() const
{
    return "despensing two gumballs for your quarter, because YOU'RE A WINNER!";
}

} // namespace hfdp::state