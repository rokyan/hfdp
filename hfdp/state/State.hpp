#pragma once

#include <string>

namespace hfdp::state
{

class State
{
public:
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
    virtual void refill() = 0;

    virtual const std::string getDescription() const = 0;

    virtual ~State() = default;
};

} // namespace hfdp::state
