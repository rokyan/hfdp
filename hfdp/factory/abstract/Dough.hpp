#pragma once

#include <string>

namespace hfdp::abstract_factory
{

class Dough
{
public:
    virtual std::string getName() const = 0;

    virtual ~Dough() = default;
};

} // namespace hfdp::abstract_factory
