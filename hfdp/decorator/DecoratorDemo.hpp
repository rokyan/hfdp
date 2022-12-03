#pragma once

#include "Demo.hpp"
#include "Beverage.hpp"

namespace hfdp
{

class DecoratorDemo final : public Demo
{
public:
    virtual void run() const override;

    virtual const std::string getName() const override;

private:
    void printBeverage(Beverage* beverage) const;
};

} // namespace hfdp
