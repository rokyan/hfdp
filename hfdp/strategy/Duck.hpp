#pragma once

<<<<<<< HEAD
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
=======
#include "fly_behavior.hpp"
#include "quack_behavior.hpp"
>>>>>>> 8d5d76fb2941e11b73f61de55f10901e703d3503

#include <memory>

namespace hfdp
{
<<<<<<< HEAD
    class Duck
    {
    public:
        Duck(std::unique_ptr<FlyBehavior> fly_behavior, std::unique_ptr<QuackBehavior> quack_behavior);

        void performFly() const;
        void performQuack() const;

        void swim() const;

        virtual void display() const = 0;

        void setFlyBehavior(std::unique_ptr<FlyBehavior> fly_behavior);
        void setQuackBehavior(std::unique_ptr<QuackBehavior> quack_behavior);

        virtual ~Duck() = default;

    private:
        std::unique_ptr<FlyBehavior> fly_behavior;
        std::unique_ptr<QuackBehavior> quack_behavior;
    };
}
=======

class duck
{
public:
    duck(std::unique_ptr<fly_behavior> _fly_behavior, std::unique_ptr<quack_behavior> _quack_behavior);

    duck(const duck&) = delete;
    duck& operator=(const duck&) = delete;

    void perform_fly() const;

    void perform_quack() const;

    void swim() const;

    virtual void display() const = 0;

    void set_fly_behavior(std::unique_ptr<fly_behavior> _fly_behavior);

    void set_quack_behavior(std::unique_ptr<quack_behavior> _quack_behavior);

    virtual ~duck() = default;

private:
    std::unique_ptr<fly_behavior> _fly_behavior;
    std::unique_ptr<quack_behavior> _quack_behavior;
};

} // namespace hfdp
>>>>>>> 8d5d76fb2941e11b73f61de55f10901e703d3503
