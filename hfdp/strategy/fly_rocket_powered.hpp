#pragma once

#include "fly_behavior.hpp"
#include <iostream>

namespace hfdp
{
    class fly_rocket_powered final : public fly_behavior
    {
    public:
        virtual void fly() const override
        {
            std::cout << "I am flying with a rocket!" << std::endl;
        }
    };
}
