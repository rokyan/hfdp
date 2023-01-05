#include "GumballMachine.hpp"
#include "SoldOutState.hpp"
#include "NoQuarterState.hpp"
#include "HasQuarterState.hpp"
#include "SoldState.hpp"
#include "WinnerState.hpp"

#include <iostream>

namespace hfdp::state
{

GumballMachine::GumballMachine(unsigned int count)
    : count(count)
{
    initStates();

    state = ((count > 0) ? states[StateIdentifier::NO_QUARTER] : states[StateIdentifier::SOLD_OUT]).get();
}

void GumballMachine::initStates()
{
    states[StateIdentifier::SOLD_OUT] = std::make_unique<SoldOutState>(this);
    states[StateIdentifier::NO_QUARTER] = std::make_unique<NoQuarterState>(this);
    states[StateIdentifier::HAS_QUARTER] = std::make_unique<HasQuarterState>(this);
    states[StateIdentifier::SOLD] = std::make_unique<SoldState>(this);
    states[StateIdentifier::WINNER] = std::make_unique<WinnerState>(this);
}

void GumballMachine::insertQuarter()
{
    state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
    state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
    state->turnCrank();
    state->dispense();
}

void GumballMachine::releaseBall()
{
    std::cout << "A gumball comes rolling out the slot..." << std::endl;

    if (count > 0)
    {
        count--;
    }
}

void GumballMachine::refill(unsigned int count)
{
    this->count += count;

    std::cout << "The gumball machine was just refilled; its new count is: " << this->count << std::endl;

    state->refill();
}


void GumballMachine::setState(StateIdentifier stateIdentifier)
{
    state = states[stateIdentifier].get();
}

unsigned int GumballMachine::getCount() const noexcept
{
    return count;
}

std::ostream& operator<<(std::ostream& os, const GumballMachine& machine)
{
    os << "Mighty Gumball, Inc." << std::endl;
    os << "C++ enabled Standing Gumball Model #2004" << std::endl;
    os << "Inventory: " << machine.count << " gumball(s)" << std::endl;
    os << "Machine is " << machine.state->getDescription() << std::endl;

    return os;
}

} // namespace hfdp::state