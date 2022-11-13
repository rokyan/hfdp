#include "MuteQuack.hpp"

#include <iostream>

namespace hfdp
{

void MuteQuack::quack() const
{
    std::cout << "Silence." << std::endl;
}

} // namespace hfdp