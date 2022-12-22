#include "CaffeineBeverage.hpp"

#include <iostream>

namespace hfdp::template_method
{

void CaffeineBeverage::prepareRecipe()
{
    boilWater();
    brew();
    pourInCup();
    addCondiments();
}

void CaffeineBeverage::boilWater()
{
    std::cout << "Boiling water" << std::endl;
}

void CaffeineBeverage::pourInCup()
{
    std::cout << "Pouring into a cup" << std::endl;
}

} // namespace hfdp::template_method