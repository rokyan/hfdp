#include "duck.hpp"

#include <iostream>
#include <utility>
#include <memory>

namespace hfdp
{

Duck::Duck(std::unique_ptr<FlyBehavior> fly_behavior, std::unique_ptr<QuackBehavior> quack_behavior)
    : fly_behavior(std::move(fly_behavior))
    , quack_behavior(std::move(quack_behavior))
{}

void Duck::performFly() const
{
    fly_behavior->fly();
}

void Duck::performQuack() const
{
    quack_behavior->quack();
}

void Duck::swim() const
{
    std::cout << "All ducks float, even decoys." << std::endl;
}

void Duck::setFlyBehavior(std::unique_ptr<FlyBehavior> fly_behavior)
{
    this->fly_behavior = std::move(fly_behavior);
}

void Duck::setQuackBehavior(std::unique_ptr<QuackBehavior> _quack_behavior)
{
    this->quack_behavior = std::move(quack_behavior);
}

} // namespace hfdp