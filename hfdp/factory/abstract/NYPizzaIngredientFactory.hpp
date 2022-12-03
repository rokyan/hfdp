#pragma once

#include "PizzaIngredientFactory.hpp"

#include <memory>

namespace hfdp::abstract_factory
{

class NYPizzaIngredientFactory final : public PizzaIngredientFactory
{
public:
    virtual std::unique_ptr<Dough> createDough() const override;
    virtual std::unique_ptr<Sauce> createSauce() const override;
    virtual std::unique_ptr<Cheese> createCheese() const override;
    virtual std::vector<std::unique_ptr<Veggies>> createVeggies() const override;
    virtual std::unique_ptr<Pepperoni> createPepperoni() const override;
    virtual std::unique_ptr<Clams> createClams() const override;
};

} // namespace hfdp::abstract_factory
