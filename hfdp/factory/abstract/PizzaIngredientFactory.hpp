#pragma once

#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Veggies.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"

#include <vector>
#include <memory>

namespace hfdp::abstract_factory
{

class PizzaIngredientFactory
{
public:
    virtual std::unique_ptr<Dough> createDough() const = 0;
    virtual std::unique_ptr<Sauce> createSauce() const = 0;
    virtual std::unique_ptr<Cheese> createCheese() const = 0;
    virtual std::vector<std::unique_ptr<Veggies>> createVeggies() const = 0;
    virtual std::unique_ptr<Pepperoni> createPepperoni() const = 0;
    virtual std::unique_ptr<Clams> createClams() const = 0;

    virtual ~PizzaIngredientFactory() = default;
};

} // namespace hfdp::abstract_factory
