#pragma once

#include "duck.hpp"
#include "fly_no_way.hpp"
#include "squeak.hpp"
#include <iostream>

namespace hfdp
{
    class rubber_duck final : public duck
    {
    public:
        rubber_duck()
            : duck(std::make_unique<fly_no_way>(), std::make_unique<squeak>())
        {}

        virtual void display() const override
        {
            std::cout << "I am a rubber duck!" << std::endl;
        }
    };
}
