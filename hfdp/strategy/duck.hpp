#pragma once

#include "fly_behavior.hpp"
#include "quack_behavior.hpp"
#include <iostream>
#include <utility>
#include <memory>

namespace hfdp
{
    class duck
    {
    public:
        duck(std::unique_ptr<fly_behavior> fly_behavior, std::unique_ptr<quack_behavior> quack_behavior)
            : fly_behavior(std::move(fly_behavior))
            , quack_behavior(std::move(quack_behavior))
        {}

        void perform_fly() const
        {
            fly_behavior->fly();
        }

        void perform_quack() const
        {
            quack_behavior->quack();
        }

        void swim() const
        {
            std::cout << "All ducks float, even decoys." << std::endl;
        }

        virtual void display() const = 0;

        void set_fly_behavior(std::unique_ptr<fly_behavior> fly_behavior)
        {
            this->fly_behavior = std::move(fly_behavior);
        }

        void set_quack_behavior(std::unique_ptr<quack_behavior> quack_behavior)
        {
            this->quack_behavior = std::move(quack_behavior);
        }

        virtual ~duck() = default;

    private:
        std::unique_ptr<fly_behavior> fly_behavior;
        std::unique_ptr<quack_behavior> quack_behavior;
    };
}
