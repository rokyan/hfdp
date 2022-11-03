#pragma once

#include "fly_behavior.hpp"
#include <iostream>

namespace hfdp
{
    class fly_with_wings final : public fly_behavior
    {
    public:
        virtual void fly() const override
        {
            std::cout << "Fly with wings!" << std::endl;
        }
    };
}