#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

#include <memory>

namespace hfdp::abstract_factory
{

class CheesePizza final : public Pizza
{
public:
    CheesePizza(const std::string& name, std::unique_ptr<PizzaIngredientFactory> ingredientFactory);

    virtual void prepare() override;

private:
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory;
};

} // namespace hfdp::abstract_factory
