#pragma once

#include "duck.hpp"
#include "fly_with_wings.hpp"
#include "simple_quack.hpp"
#include <iostream>

namespace hfdp
{
    class readhead_duck final : public duck
    {
    public:
        readhead_duck()
            : duck(std::make_unique<fly_with_wings>(), std::make_unique<simple_quack>())
        {}

        virtual void display() const override
        {
            std::cout << "I am a readhead duck!" << std::endl;
        }
    };
}
