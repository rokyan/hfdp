#pragma once

#include "Dough.hpp"

namespace hfdp::abstract_factory
{

class ThinCrustDough final : public Dough
{
public:
    virtual std::string getName() const override
    {
        return "Thin Crust Dough";
    }
};

} // namespace hfdp::abstract_factory
