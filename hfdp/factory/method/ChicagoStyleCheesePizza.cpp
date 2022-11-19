#include "ChicagoStyleCheesePizza.hpp"

#include <iostream>

namespace hfdp
{

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
    : Pizza("Chicago Style Deep Dish Cheese Pizza", "Extra Thick Crust Dough", "Plum Tomato Sauce", {
        "Shredded Mozzarella Cheese" })
{}

void ChicagoStyleCheesePizza::cut()
{
    std::cout << "Cutting the pizza into square slices" << std::endl;
}

} // namespace hfdp