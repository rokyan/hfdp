#pragma once

#include "Cheese.hpp"

#include <string>

namespace hfdp::abstract_factory
{

class ReggianoCheese final : public Cheese
{
public:
    virtual std::string getName() const override
    {
        return "Reggiano Cheese";
    }
};

} // namespace hfdp::abstract_factory
