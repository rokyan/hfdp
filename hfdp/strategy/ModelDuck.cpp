#include "ModelDuck.hpp"
#include "FlyNoWay.hpp"
#include "Quack.hpp"

#include <iostream>
#include <memory>

namespace hfdp::strategy
{

ModelDuck::ModelDuck()
    : Duck(std::make_unique<FlyNoWay>(), std::make_unique<Quack>())
{}

void ModelDuck::display() const
{
    std::cout << "I am a model duck!" << std::endl;
}

} // namespace hfdp::strategy