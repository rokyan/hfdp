#include "Squeak.hpp"

#include <iostream>

namespace hfdp::strategy
{

void Squeak::quack() const
{
    std::cout << "Squeak." << std::endl;
}

} // namespace hfdp::strategy