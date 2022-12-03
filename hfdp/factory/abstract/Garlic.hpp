#pragma once

#include "Veggies.hpp"

#include <string>

namespace hfdp::abstract_factory
{

class Garlic final : public Veggies
{
public:
    virtual std::string getName() const override
    {
        return "Garlic";
    }
};

} // namespace hfdp::abstract_factory
