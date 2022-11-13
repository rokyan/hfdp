#include "RubberDuck.hpp"
#include "FlyNoWay.hpp"
#include "Squeak.hpp"

#include <iostream>
#include <memory>

namespace hfdp
{

RubberDuck::RubberDuck()
    : Duck(std::make_unique<FlyNoWay>(), std::make_unique<Squeak>())
{}

void RubberDuck::display() const
{
    std::cout << "I am a rubber duck!" << std::endl;
}

} // namespace hfdp