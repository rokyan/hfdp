#include "ChicagoPizzaStore.hpp"
#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStyleVeggiePizza.hpp"
#include "ChicagoStyleClamPizza.hpp"
#include "ChicagoStylePepperoniPizza.hpp"

namespace hfdp
{

std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(const std::string& item) const
{
    if (item == "cheese")
    {
        return std::make_unique<ChicagoStyleCheesePizza>();
    }
    else if (item == "veggie")
    {
        return std::make_unique<ChicagoStyleVeggiePizza>();
    }
    else if (item == "clam")
    {
        return std::make_unique<ChicagoStyleClamPizza>();
    }
    else
    {
        return std::make_unique<ChicagoStylePepperoniPizza>();
    }
}

} // namespace hfdp