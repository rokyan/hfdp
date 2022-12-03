#pragma once

#include "Pizza.hpp"

#include <string>
#include <memory>

namespace hfdp::abstract_method
{

class PizzaStore
{
public:
    virtual std::unique_ptr<Pizza> createPizza(const std::string& item) const = 0;

    std::unique_ptr<Pizza> orderPizza(const std::string& item) const;

    virtual ~PizzaStore() = default;
};

} // namespace hfdp::abstract_method
