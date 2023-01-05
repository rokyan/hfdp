#pragma once

#include "State.hpp"
#include "GumballMachine.hpp"

namespace hfdp::state
{

class SoldState final : public State
{
public:
    SoldState(GumballMachine* machine);

    virtual void insertQuarter() override;
    virtual void ejectQuarter() override;
    virtual void turnCrank() override;
    virtual void dispense() override;
    virtual void refill() override;

    virtual const std::string getDescription() const override;

private:
    GumballMachine* machine;
};

} // namespace hfdp::state
