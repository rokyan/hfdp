#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

#include <memory>
#include <string>

namespace hfdp::abstract_factory
{

class PepperoniPizza final : public Pizza
{
public:
    PepperoniPizza(const std::string& name, std::unique_ptr<PizzaIngredientFactory> ingredientFactory);

    virtual void prepare() override;

private:
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory;
};

} // namespace hfdp::abstract_factory
