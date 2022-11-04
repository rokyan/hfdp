#pragma once

#include "quack_behavior.hpp"
#include <iostream>

namespace hfdp
{
    class mute_quack final : public quack_behavior
    {
    public:
        virtual void quack() override
        {
            std::cout << "Silence." << std::endl;
        }
    };
}
