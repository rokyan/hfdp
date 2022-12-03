#include "ClamPizza.hpp"

#include <iostream>

namespace hfdp::abstract_factory
{

ClamPizza::ClamPizza(const std::string& name, std::unique_ptr<PizzaIngredientFactory> ingredientFactory)
    : Pizza(name)
    , ingredientFactory(std::move(ingredientFactory))
{}

void ClamPizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;

    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    clams = ingredientFactory->createClams();
}

} // namespace hfdp::abstract_factory