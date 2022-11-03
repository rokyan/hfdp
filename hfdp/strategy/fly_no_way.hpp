#pragma once

#include "fly_behavior.hpp"
#include <iostream>

namespace hfdp
{
    class fly_no_way final : public fly_behavior
    {
    public:
        virtual void fly() const override
        {
            std::cout << "I can't fly!" << std::endl;
        }
    };
}