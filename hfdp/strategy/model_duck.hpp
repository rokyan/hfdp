#pragma once

#include "duck.hpp"
#include "fly_no_way.hpp"
#include "simple_quack.hpp"
#include <iostream>
#include <memory>

namespace hfdp
{
    class model_duck final : public duck
    {
    public:
        model_duck()
            : duck(std::make_unique<fly_no_way>(), std::make_unique<simple_quack>())
        {}

        virtual void display() const override
        {
            std::cout << "I am a model duck!" << std::endl;
        }
    };
}
