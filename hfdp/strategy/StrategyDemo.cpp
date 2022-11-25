#include "StrategyDemo.hpp"
#include "MallardDuck.hpp"
#include "RedheadDuck.hpp"
#include "RubberDuck.hpp"
#include "ModelDuck.hpp"
#include "FlyRocketPowered.hpp"

#include <iostream>
#include <memory>

namespace hfdp
{

using namespace strategy;

void StrategyDemo::run() const
{
    FlyAndQuack(MallardDuck{});
    FlyAndQuack(RedheadDuck{});
    FlyAndQuack(RubberDuck{});

    ModelDuck duck;
    FlyAndQuack(duck);
    duck.setFlyBehavior(std::make_unique<FlyRocketPowered>());
    FlyAndQuack(duck);
}

void StrategyDemo::FlyAndQuack(const Duck& duck) const
{
    std::cout << "###" << std::endl;

    duck.display();
    duck.swim();
    duck.performFly();
    duck.performQuack();

    std::cout << "###" << std::endl;
}

} // namespace hfdp