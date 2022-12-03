#include "MallardDuck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"

#include <iostream>
#include <memory>

namespace hfdp::strategy
{

MallardDuck::MallardDuck()
    : Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>())
{}

void MallardDuck::display() const
{
    std::cout << "I am a real Mallard duck!" << std::endl;
}

} // namespace hfdp::strategy