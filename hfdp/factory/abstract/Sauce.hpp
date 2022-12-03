#pragma once

#include <string>

namespace hfdp::abstract_factory
{

class Sauce
{
public:
    virtual std::string getName() const = 0;

    virtual ~Sauce() = default;
};

} // namespace hfdp::abstract_factory
