#pragma once

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

#include <memory>

namespace hfdp
{

class Duck
{
public:
    Duck(std::unique_ptr<FlyBehavior> fly_behavior, std::unique_ptr<QuackBehavior> quack_behavior);

    void performFly() const;
    void performQuack() const;

    void swim() const;

    virtual void display() const = 0;

    void setFlyBehavior(std::unique_ptr<FlyBehavior> fly_behavior);
    void setQuackBehavior(std::unique_ptr<QuackBehavior> quack_behavior);

    virtual ~Duck() = default;

private:
    std::unique_ptr<FlyBehavior> fly_behavior;
    std::unique_ptr<QuackBehavior> quack_behavior;
};

} // namespace hfdp
