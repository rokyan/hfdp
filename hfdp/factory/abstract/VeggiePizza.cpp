#include "VeggiePizza.hpp"

#include <iostream>

namespace hfdp::abstract_factory
{

VeggiePizza::VeggiePizza(const std::string& name, std::unique_ptr<PizzaIngredientFactory> ingredientFactory)
    : Pizza(name)
    , ingredientFactory(std::move(ingredientFactory))
{}

void VeggiePizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;

    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    veggies = ingredientFactory->createVeggies();
}

} // namespace hfdp::abstract_factory
