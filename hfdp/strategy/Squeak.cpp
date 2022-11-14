#include "squeak.hpp"

#include <iostream>

namespace hfdp
{

void Squeak::quack() const
{
    std::cout << "Squeak." << std::endl;
}

} // namespace hfdp