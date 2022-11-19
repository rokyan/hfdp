#include "NYPizzaStore.hpp"
#include "NYStyleCheesePizza.hpp"
#include "NYStyleVeggiePizza.hpp"
#include "NYStyleClamPizza.hpp"
#include "NYStylePepperoniPizza.hpp"

namespace hfdp
{

std::unique_ptr<Pizza> NYPizzaStore::createPizza(const std::string& item) const
{
    if (item == "cheese")
    {
        return std::make_unique<NYStyleCheesePizza>();
    }
    else if (item == "veggie")
    {
        return std::make_unique<NYStyleVeggiePizza>();
    }
    else if (item == "clam")
    {
        return std::make_unique<NYStyleClamPizza>();
    }
    else
    {
        return std::make_unique<NYStylePepperoniPizza>();
    }
}

} // namespace hfdp