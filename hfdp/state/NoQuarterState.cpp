#include "NoQuarterState.hpp"

#include <iostream>

namespace hfdp::state
{

NoQuarterState::NoQuarterState(GumballMachine* machine)
    : machine{ machine }
{}

void NoQuarterState::insertQuarter()
{
    std::cout << "You inserted a quarter" << std::endl;

    machine->setState(StateIdentifier::HAS_QUARTER);
}

void NoQuarterState::ejectQuarter()
{
    std::cout << "You haven't inserted a quarter" << std::endl;
}

void NoQuarterState::turnCrank()
{
    std::cout << "You turned, but there's no quarter" << std::endl;
}

void NoQuarterState::dispense()
{
    std::cout << "You need to pay first" << std::endl;
}

void NoQuarterState::refill()
{
}

const std::string NoQuarterState::getDescription() const
{
    return "waiting for quarter";
}

} // namespace hfdp::state