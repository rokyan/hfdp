#include "ChicagoStylePepperoniPizza.hpp"

#include <iostream>

namespace hfdp
{

ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
    : Pizza("Chicago Style Pepperoni Pizza", "Extra Thick Crust Dough", "Plum Tomato Sauce", {
        "Shredded Mozzarella Cheese",
        "Black Olives",
        "Spinach",
        "Eggplant",
        "Sliced Pepperoni" })
{}

void ChicagoStylePepperoniPizza::cut()
{
    std::cout << "Cutting the pizza into square slices" << std::endl;
}

} // namespace hfdp
