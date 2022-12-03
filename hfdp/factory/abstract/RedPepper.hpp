#pragma once

#include "Veggies.hpp"

#include <string>

namespace hfdp::abstract_factory
{

class RedPepper final : public Veggies
{
public:
    virtual std::string getName() const override
    {
        return "Red Pepper";
    }
};

} // namespace hfdp::abstract_factory
