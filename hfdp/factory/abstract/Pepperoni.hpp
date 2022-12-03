#pragma once

#include <string>

namespace hfdp::abstract_factory
{

class Pepperoni
{
public:
    virtual std::string getName() const = 0;

    virtual ~Pepperoni() = default;
};

} // namespace hfdp::abstract_factory
