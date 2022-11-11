#include "mallard_duck.hpp"
#include "fly_with_wings.hpp"
#include "simple_quack.hpp"

#include <iostream>
#include <memory>

namespace hfdp
{

mallard_duck::mallard_duck()
    : duck(std::make_unique<fly_with_wings>(), std::make_unique<simple_quack>())
{}

void mallard_duck::display() const
{
    std::cout << "I am a real Mallard duck!" << std::endl;
}

} // namespace hfdp