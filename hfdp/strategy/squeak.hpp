#pragma once

#include "quack_behavior.hpp"
#include <iostream>

namespace hfdp
{
    class squeak final : public quack_behavior
    {
    public:
        virtual void quack() const override
        {
            std::cout << "Squeak!" << std::endl;
        }
    };
}
