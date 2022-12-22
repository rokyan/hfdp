#include "CaffeineBeverageWithHook.hpp"

#include <iostream>

namespace hfdp::template_method
{

void CaffeineBeverageWithHook::prepareRecipe()
{
    boilWater();
    brew();
    pourInCup();

    if (customerWantsCondiments())
    {
        addCondiments();
    }
}

void CaffeineBeverageWithHook::boilWater()
{
    std::cout << "Boiling water" << std::endl;
}

void CaffeineBeverageWithHook::pourInCup()
{
    std::cout << "Pouring into a cup" << std::endl;
}

bool CaffeineBeverageWithHook::customerWantsCondiments() const noexcept
{
    return true;
}

} // namespace hfdp::template_method
