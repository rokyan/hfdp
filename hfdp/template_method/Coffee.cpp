#include "Coffee.hpp"

#include <iostream>

namespace hfdp::template_method
{

void Coffee::brew()
{
    std::cout << "Dripping coffee through filter" << std::endl;
}

void Coffee::addCondiments()
{
    std::cout << "Adding sugar and milk" << std::endl;
}

} // namespace hfdp::template_method