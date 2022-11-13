#pragma once

#include "CondimentDecorator.hpp"

#include <memory>

namespace hfdp
{

class Whip final : public CondimentDecorator
{
public:
    Whip(std::unique_ptr<Beverage> beverage);

    virtual const std::string getDescription() const noexcept override;

    virtual double cost() const noexcept override;
};

} // namespace hfdp
