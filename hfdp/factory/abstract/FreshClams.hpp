#pragma once

#include "Clams.hpp"

#include <string>

namespace hfdp::abstract_factory
{

class FreshClams final : public Clams
{
public:
    std::string getName() const override
    {
        return "Fresh Clams from Long Island Sound";
    }
};

} // namespace hfdp::abstract_factory
