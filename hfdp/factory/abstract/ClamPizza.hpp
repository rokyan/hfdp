#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

#include <memory>
#include <string>

namespace hfdp::abstract_factory
{

class ClamPizza final : public Pizza
{
public:
    ClamPizza(const std::string& name, std::unique_ptr<PizzaIngredientFactory> ingredientFactory);

    virtual void prepare() override;

private:
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory;
};

} // namespace hfdp::abstract_factory
