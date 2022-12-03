#pragma once

#include <string>

namespace hfdp::abstract_factory
{

class Veggies
{
public:
    virtual std::string getName() const = 0;

    virtual ~Veggies() = default;
};

} // namespace hfdp::abstract_factory
