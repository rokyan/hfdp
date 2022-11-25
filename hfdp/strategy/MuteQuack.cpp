#include "MuteQuack.hpp"

#include <iostream>

namespace hfdp::strategy
{

void MuteQuack::quack() const
{
    std::cout << "Silence." << std::endl;
}

} // namespace hfdp::strategy