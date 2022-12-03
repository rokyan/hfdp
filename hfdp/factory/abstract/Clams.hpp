#pragma once

#include <string>

namespace hfdp::abstract_factory
{

class Clams
{
public:
    virtual std::string getName() const = 0;

    virtual ~Clams() = default;
};

} // namespace hfdp::abstract_factory
