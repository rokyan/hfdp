#include "NYPizzaIngredientFactory.hpp"
#include "ThinCrustDough.hpp"
#include "MarinaraSauce.hpp"
#include "ReggianoCheese.hpp"
#include "Garlic.hpp"
#include "Onion.hpp"
#include "Mushroom.hpp"
#include "RedPepper.hpp"
#include "SlicedPepperoni.hpp"
#include "FreshClams.hpp"

namespace hfdp::abstract_factory
{

std::unique_ptr<Dough> NYPizzaIngredientFactory::createDough() const
{
    return std::make_unique<ThinCrustDough>();
}

std::unique_ptr<Sauce> NYPizzaIngredientFactory::createSauce() const
{
    return std::make_unique<MarinaraSauce>();
}

std::unique_ptr<Cheese> NYPizzaIngredientFactory::createCheese() const
{
    return std::make_unique<ReggianoCheese>();
}

std::vector<std::unique_ptr<Veggies>> NYPizzaIngredientFactory::createVeggies() const
{
    std::vector<std::unique_ptr<Veggies>> veggies;

    veggies.push_back(std::make_unique<Garlic>());
    veggies.push_back(std::make_unique<Mushroom>());
    veggies.push_back(std::make_unique<Onion>());
    veggies.push_back(std::make_unique<RedPepper>());

    return veggies;
}

std::unique_ptr<Pepperoni> NYPizzaIngredientFactory::createPepperoni() const
{
    return std::make_unique<SlicedPepperoni>();
}

std::unique_ptr<Clams> NYPizzaIngredientFactory::createClams() const
{
    return std::make_unique<FreshClams>();
}

} // namespace hfdp::abstract_factory
