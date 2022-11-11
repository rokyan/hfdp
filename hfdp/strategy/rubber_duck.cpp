#include "rubber_duck.hpp"
#include "fly_no_way.hpp"
#include "squeak.hpp"

#include <iostream>
#include <memory>

namespace hfdp
{

rubber_duck::rubber_duck()
    : duck(std::make_unique<fly_no_way>(), std::make_unique<squeak>())
{}

void rubber_duck::display() const
{
    std::cout << "I am a rubber duck!" << std::endl;
}

} // namespace hfdp