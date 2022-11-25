#include "duck.hpp"

#include <iostream>
#include <utility>
#include <memory>

namespace hfdp::strategy
{

Duck::Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior)
    : flyBehavior(std::move(flyBehavior))
    , quackBehavior(std::move(quackBehavior))
{}

void Duck::performFly() const
{
    flyBehavior->fly();
}

void Duck::performQuack() const
{
    quackBehavior->quack();
}

void Duck::swim() const
{
    std::cout << "All ducks float, even decoys." << std::endl;
}

void Duck::setFlyBehavior(std::unique_ptr<FlyBehavior> flyBehavior)
{
    this->flyBehavior = std::move(flyBehavior);
}

void Duck::setQuackBehavior(std::unique_ptr<QuackBehavior> quackBehavior)
{
    this->quackBehavior = std::move(quackBehavior);
}

} // namespace hfdp::strategy
