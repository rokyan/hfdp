#include "CoffeeWithHook.hpp"

#include <iostream>

namespace hfdp::template_method
{

void CoffeeWithHook::brew()
{
    std::cout << "Dripping coffee through filter" << std::endl;
}

void CoffeeWithHook::addCondiments()
{
    std::cout << "Adding sugar and milk" << std::endl;
}

bool CoffeeWithHook::customerWantsCondiments() const noexcept
{
    return false;
}

} // namespace hfdp::template_method
