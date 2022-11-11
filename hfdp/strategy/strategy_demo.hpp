#pragma once

#include "../common/demo.hpp"
#include "mallard_duck.hpp"
#include "model_duck.hpp"
#include "redhead_duck.hpp"
#include "rubber_duck.hpp"
#include "fly_rocket_powered.hpp"

#include <iostream>

namespace hfdp
{
    class strategy_demo final : public demo
    {
    public:
        virtual void run() const override
        {
            fly_and_quack(mallard_duck{});
            fly_and_quack(redhead_duck{});
            fly_and_quack(rubber_duck{});

            model_duck test_duck;
            fly_and_quack(test_duck);
            test_duck.set_fly_behavior(std::make_unique<fly_rocket_powered>());
            fly_and_quack(test_duck);
        }

    private:
        void fly_and_quack(const duck& duck) const
        {
            std::cout << "###" << std::endl;

            duck.display();
            duck.swim();
            duck.perform_fly();
            duck.perform_quack();

            std::cout << "###" << std::endl;
        }
    };
}
