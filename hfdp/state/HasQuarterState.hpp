#pragma once

#include "State.hpp"
#include "GumballMachine.hpp"

#include <random>

namespace hfdp::state
{

class HasQuarterState final : public State
{
public:
    HasQuarterState(GumballMachine* machine);

    virtual void insertQuarter() override;
    virtual void ejectQuarter() override;
    virtual void turnCrank() override;
    virtual void dispense() override;
    virtual void refill() override;

    virtual const std::string getDescription() const override;

private:
    GumballMachine* machine;

    std::random_device rd;
    std::mt19937 gen;
    std::uniform_int_distribution<> dist;
};

} // namespace hfdp::state
