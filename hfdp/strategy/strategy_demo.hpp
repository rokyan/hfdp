#pragma once

#include "../common/demo.hpp"

#include "mallard_duck.hpp"
#include "model_duck.hpp"
#include "fly_rocket_powered.hpp"

#include <memory>

namespace hfdp
{
    class strategy_demo final : public demo
    {
    public:
        virtual void run() const override
        {
            mallard_duck duck;
            duck.perform_fly();
            duck.perform_quack();

            model_duck another_duck;
            another_duck.perform_fly();
            another_duck.set_fly_behavior(std::make_unique<fly_rocket_powered>());
            another_duck.perform_fly();
        }
    };
}
