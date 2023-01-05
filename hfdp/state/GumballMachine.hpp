#pragma once

#include "State.hpp"

#include <string>
#include <memory>
#include <unordered_map>

namespace hfdp::state
{

enum class StateIdentifier
{
    SOLD_OUT,
    NO_QUARTER,
    HAS_QUARTER,
    SOLD,
    WINNER
};

class GumballMachine final
{
public:
    GumballMachine(unsigned int count);

    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void releaseBall();
    void refill(unsigned int count);

    void setState(StateIdentifier stateIdentifier);

    unsigned int getCount() const noexcept;

    friend std::ostream& operator<<(std::ostream& os, const GumballMachine& machine);

private:
    void initStates();

private:
    std::unordered_map<StateIdentifier, std::unique_ptr<State>> states;
    unsigned int count;
    State* state;
};

} // namespace hfdp::state
