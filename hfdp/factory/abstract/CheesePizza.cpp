#include "CheesePizza.hpp"

#include <iostream>

namespace hfdp::abstract_factory
{

CheesePizza::CheesePizza(const std::string& name, std::unique_ptr<PizzaIngredientFactory> ingredientFactory)
    : Pizza(name)
    , ingredientFactory(std::move(ingredientFactory))
{}

void CheesePizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;

    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
}

} // namespace hfdp::abstract_factory