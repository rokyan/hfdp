#include "NYPizzaStore.hpp"
#include "NYPizzaIngredientFactory.hpp"
#include "CheesePizza.hpp"
#include "VeggiePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"

namespace hfdp::abstract_factory
{

std::unique_ptr<Pizza> NYPizzaStore::createPizza(const std::string& type) const
{
    std::unique_ptr<PizzaIngredientFactory> ingredientFactory = std::make_unique<NYPizzaIngredientFactory>();

    if (type == "cheese")
    {
        return std::make_unique<CheesePizza>("New York Style Cheese Pizza", std::move(ingredientFactory));
    }
    else if (type == "veggie")
    {
        return std::make_unique<VeggiePizza>("New York Style Veggie Pizza", std::move(ingredientFactory));
    }
    else if (type == "clam")
    {
        return std::make_unique<ClamPizza>("New York Style Clam Pizza", std::move(ingredientFactory));
    }
    else if (type == "pepperoni")
    {
        return std::make_unique<CheesePizza>("New York Style Pepperoni Pizza", std::move(ingredientFactory));
    }

    return nullptr;
}

} // namespace hfdp::abstract_factory