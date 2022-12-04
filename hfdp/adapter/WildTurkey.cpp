#include "WildTurkey.hpp"

#include <iostream>

namespace hfdp::adapter
{

void WildTurkey::gobble()
{
    std::cout << "Gobble gobble!" << std::endl;
}

void WildTurkey::fly()
{
    std::cout << "I'm flying a short distance!" << std::endl;
}

} // namespace hfdp::adapter