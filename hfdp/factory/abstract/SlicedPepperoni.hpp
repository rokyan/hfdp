#pragma once

#include "Pepperoni.hpp"

namespace hfdp::abstract_factory
{

class SlicedPepperoni final : public Pepperoni
{
public:
    virtual std::string getName() const override
    {
        return "Sliced Pepperoni";
    }
};

} // namespace hfdp::abstract_factory
