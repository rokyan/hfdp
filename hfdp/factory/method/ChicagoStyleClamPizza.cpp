#include "ChicagoStyleClamPizza.hpp"

#include <iostream>

namespace hfdp::abstract_method
{

ChicagoStyleClamPizza::ChicagoStyleClamPizza()
    : Pizza("Chicago Style Clam Pizza", "Extra Thick Crust Dough", "Plum Tomato Sauce", {
        "Shredded Mozzarella Cheese",
        "Frozen Clams from Chesapeake Bay" })
{}

void ChicagoStyleClamPizza::cut()
{
    std::cout << "Cutting the pizza into square slices" << std::endl;
}

} // namespace hfdp::abstract_method
