#include "RedheadDuck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"

#include <iostream>
#include <memory>

namespace hfdp::strategy
{

RedheadDuck::RedheadDuck()
    : Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>())
{}

void RedheadDuck::display() const
{
    std::cout << "I am a readhead duck!" << std::endl;
}

} // namespace hfdp::strategy