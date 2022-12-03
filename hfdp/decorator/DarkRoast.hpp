#pragma once

#include "Beverage.hpp"

namespace hfdp::decorator
{

class DarkRoast final : public Beverage
{
public:
    virtual const std::string getDescription() const noexcept override;

    virtual double cost() const noexcept override;
};

} // namespace hfdp::decorator
