#include "MallardDuck.hpp"

#include <iostream>

namespace hfdp::adapter
{

void MallardDuck::fly()
{
    std::cout << "I am flying!" << std::endl;
}

void MallardDuck::quack()
{
    std::cout << "Quack!" << std::endl;
}

} // namespace hfdp::adapter