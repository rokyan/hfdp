#include "duck.hpp"

#include <iostream>
#include <utility>
#include <memory>

namespace hfdp
{

duck::duck(std::unique_ptr<fly_behavior> _fly_behavior, std::unique_ptr<quack_behavior> _quack_behavior)
    : _fly_behavior(std::move(_fly_behavior))
    , _quack_behavior(std::move(_quack_behavior))
{}

void duck::perform_fly() const
{
    _fly_behavior->fly();
}

void duck::perform_quack() const
{
    _quack_behavior->quack();
}

void duck::swim() const
{
    std::cout << "All ducks float, even decoys." << std::endl;
}

void duck::set_fly_behavior(std::unique_ptr<fly_behavior> _fly_behavior)
{
    this->_fly_behavior = std::move(_fly_behavior);
}

void duck::set_quack_behavior(std::unique_ptr<quack_behavior> _quack_behavior)
{
    this->_quack_behavior = std::move(_quack_behavior);
}

} // namespace hfdp