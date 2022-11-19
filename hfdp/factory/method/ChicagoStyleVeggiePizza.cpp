#include "ChicagoStyleVeggiePizza.hpp"

#include <iostream>

namespace hfdp
{

ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
    : Pizza("Chicago Style Deep Dish Veggie Pizza", "Extra Thick Crust Dough", "Plum Tomato Sauce", {
        "Shredded Mozzarella Cheese",
        "Black Olives",
        "Spinach",
        "Eggplant" })
{}

void ChicagoStyleVeggiePizza::cut()
{
    std::cout << "Cutting the pizza into square slices" << std::endl;
}

} // namespace hfdp
