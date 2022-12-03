#include "Quack.hpp"

#include <iostream>

namespace hfdp::strategy
{

void Quack::quack() const
{
    std::cout << "Quack." << std::endl;
}

} // namespace hfdp::strategy