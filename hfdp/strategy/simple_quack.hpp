#pragma once

#include "quack_behavior.hpp"
#include <iostream>

namespace hfdp
{
    class simple_quack final : public quack_behavior
    {
    public:
        virtual void quack() const override
        {
            std::cout << "Quack." << std::endl;
        }
    };
}
