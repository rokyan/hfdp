#include "FlyNoWay.hpp"

#include <iostream>

namespace hfdp::strategy
{

void FlyNoWay::fly() const
{
    std::cout << "I can't fly." << std::endl;
}

} // namespace hfdp::strategy