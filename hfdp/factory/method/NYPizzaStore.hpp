#pragma once

#include "PizzaStore.hpp"

#include <string>
#include <memory>

namespace hfdp::abstract_method
{

class NYPizzaStore final : public PizzaStore
{
public:
    virtual std::unique_ptr<Pizza> createPizza(const std::string& item) const override;
};

} // namespace hfdp::abstract_method
