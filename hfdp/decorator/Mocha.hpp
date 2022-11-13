#pragma once

#include "CondimentDecorator.hpp"

#include <memory>

namespace hfdp
{

class Mocha final : public CondimentDecorator
{
public:
    Mocha(std::unique_ptr<Beverage> beverage);

    virtual const std::string getDescription() const noexcept override;

    virtual double cost() const noexcept override;
};

} // namespace hfdp
