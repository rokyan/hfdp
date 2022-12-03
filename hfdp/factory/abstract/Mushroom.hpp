#pragma once

#include "Veggies.hpp"

#include <string>

namespace hfdp::abstract_factory
{

class Mushroom final : public Veggies
{
public:
    virtual std::string getName() const override
    {
        return "Mushroom";
    }
};

} // namespace hfdp::abstract_factory
