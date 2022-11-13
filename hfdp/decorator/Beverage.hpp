#pragma once

#include <string>

namespace hfdp
{

class Beverage
{
public:
    virtual const std::string getDescription() const noexcept;

    virtual double cost() const noexcept = 0;

    ~Beverage() = default;
};

} // namespace hfdp