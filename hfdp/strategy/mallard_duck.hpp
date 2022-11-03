#pragma once

#include "duck.hpp"
#include "simple_quack.hpp"
#include "fly_with_wings.hpp"
#include <iostream>

namespace hfdp
{
    class mallard_duck final : public duck
    {
    public:
        mallard_duck()
            : duck(std::make_unique<fly_with_wings>(), std::make_unique<simple_quack>())
        {}

        virtual void display() const override
        {
            std::cout << "I am a real Mallard duck!" << std::endl;
        }
    };
}
