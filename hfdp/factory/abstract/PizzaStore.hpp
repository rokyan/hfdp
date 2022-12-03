#pragma once

#include "Pizza.hpp"

#include <memory>
#include <string>

namespace hfdp::abstract_factory
{

class PizzaStore
{
public:
    virtual std::unique_ptr<Pizza> createPizza(const std::string& type) const = 0;

    std::unique_ptr<Pizza> orderPizza(const std::string& type);

    virtual ~PizzaStore() = default;
};

} // namespace hfdp::abstract_factory
