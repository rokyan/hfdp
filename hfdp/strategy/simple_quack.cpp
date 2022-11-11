#include "simple_quack.hpp"

#include <iostream>

namespace hfdp
{

void smple_quack::quack() const
{
    std::cout << "Quack." << std::endl;
}

} // namespace hfdp