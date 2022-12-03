#pragma once

#include <string>

namespace hfdp::abstract_factory
{

class Cheese
{
public:
    virtual std::string getName() const = 0;

    virtual ~Cheese() = default;
};

} // namespace hfdp::abstract_factory
