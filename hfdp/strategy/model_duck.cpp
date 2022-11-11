#include "model_duck.hpp"
#include "fly_no_way.hpp"
#include "simple_quack.hpp"

#include <iostream>
#include <memory>

namespace hfdp
{

model_duck::model_duck()
    : duck(std::make_unique<fly_no_way>(), std::make_unique<simple_quack>())
{}

void model_duck::display() const
{
    std::cout << "I am a model duck!" << std::endl;
}

} // namespace hfdp