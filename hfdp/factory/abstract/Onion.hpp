#pragma once

#include "Veggies.hpp"

#include <string>

namespace hfdp::abstract_factory
{

class Onion final : public Veggies
{
public:
    virtual std::string getName() const override
    {
        return "Onion";
    }
};

} // namespace hfdp::abstract_factory
