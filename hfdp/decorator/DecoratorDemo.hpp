#pragma once

#include "../common/demo.hpp"
#include "Beverage.hpp"

namespace hfdp
{

class DecoratorDemo final : public demo
{
public:
    virtual void run() const override;

private:
    void printBeverage(Beverage* beverage) const;
};

} // namespace hfdp
