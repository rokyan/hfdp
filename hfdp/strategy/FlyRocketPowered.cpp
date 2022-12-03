#include "FlyRocketPowered.hpp"

#include <iostream>

namespace hfdp::strategy
{

void FlyRocketPowered::fly() const
{
    std::cout << "I am flying with a rocket." << std::endl;
}

} // namespace hfdp::strategy