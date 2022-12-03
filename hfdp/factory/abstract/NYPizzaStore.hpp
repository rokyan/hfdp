#pragma once

#include "PizzaStore.hpp"

#include <memory>
#include <string>

namespace hfdp::abstract_factory
{

class NYPizzaStore final : public PizzaStore
{
public:
    virtual std::unique_ptr<Pizza> createPizza(const std::string& type) const override;
};

} // namespace hfdp::abstract_factory
