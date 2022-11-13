#include "squeak.hpp"

#include <iostream>

namespace hfdp
{

void squeak::quack() const
{
    std::cout << "Squeak." << std::endl;
}

} // namespace hfdp