#include "Tea.hpp"

#include <iostream>

namespace hfdp::template_method
{

void Tea::brew()
{
    std::cout << "Steeping the tea" << std::endl;
}

void Tea::addCondiments()
{
    std::cout << "Adding lemon" << std::endl;
}

} // namespace hfdp::template_method