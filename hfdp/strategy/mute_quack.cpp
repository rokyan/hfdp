#include "mute_quack.hpp"

#include <iostream>

namespace hfdp
{

void mute_quack::quack() const
{
    std::cout << "Silence." << std::endl;
}

} // namespace hfdp