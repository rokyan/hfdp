#pragma once

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

#include <memory>

namespace hfdp
{

class Duck
{
public:
    Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior);

    void performFly() const;
    void performQuack() const;

    void swim() const;

    virtual void display() const = 0;

    void setFlyBehavior(std::unique_ptr<FlyBehavior> flyBehavior);
    void setQuackBehavior(std::unique_ptr<QuackBehavior> quackBehavior);

    virtual ~Duck() = default;

private:
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;
};

} // namespace hfdp
