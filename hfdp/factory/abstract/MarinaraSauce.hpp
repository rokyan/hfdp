#pragma once

#include "Sauce.hpp"

#include <string>

namespace hfdp::abstract_factory
{

class MarinaraSauce final : public Sauce
{
public:
    virtual std::string getName() const override
    {
        return "Marinara Sauce";
    }
};

} // namespace hfdp::abstract_factory
