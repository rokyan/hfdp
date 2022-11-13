#pragma once

#include "Beverage.hpp"

namespace hfdp
{

class Espresso final : public Beverage
{
public:
    virtual const std::string getDescription() const noexcept override;

    virtual double cost() const noexcept override;
};

} // namespace hfdp
