#pragma once

#include <string>

namespace hfdp
{

class Cheese
{
public:
    virtual std::string getName() const = 0;

    virtual ~Cheese() = default;
};

} // namespace hfdp
