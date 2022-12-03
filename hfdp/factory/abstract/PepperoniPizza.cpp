#include "PepperoniPizza.hpp"

#include <iostream>

namespace hfdp::abstract_factory
{

PepperoniPizza::PepperoniPizza(const std::string& name, std::unique_ptr<PizzaIngredientFactory> ingredientFactory)
    : Pizza(name)
    , ingredientFactory(std::move(ingredientFactory))
{}

void PepperoniPizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;

    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    veggies = ingredientFactory->createVeggies();
    pepperoni = ingredientFactory->createPepperoni();
}

} // namespace hfdp::abstract_factory