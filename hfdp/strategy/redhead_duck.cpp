#include "redhead_duck.hpp"
#include "fly_with_wings.hpp"
#include "simple_quack.hpp"

#include <iostream>
#include <memory>

namespace hfdp
{

redhead_duck::redhead_duck()
    : duck(std::make_unique<fly_with_wings>(), std::make_unique<simple_quack>())
{}

void redhead_duck::display() const
{
    std::cout << "I am a redhead duck!" << std::endl;
}

} // namespace hfdp