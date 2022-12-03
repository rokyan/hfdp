#include "../strategy/StrategyDemo.hpp"
#include "../observer/ObserverDemo.hpp"
#include "../decorator/DecoratorDemo.hpp"
#include "../factory/method/FactoryMethodDemo.hpp"
#include "../factory/abstract/AbstractFactoryDemo.hpp"
#include "../singleton/SingletonDemo.hpp"

void run_demo(const hfdp::Demo&);

int main()
{
    run_demo(hfdp::StrategyDemo{});
    run_demo(hfdp::ObserverDemo{});
    run_demo(hfdp::DecoratorDemo{});
    run_demo(hfdp::FactoryMethodDemo{});
    run_demo(hfdp::AbstractFactoryDemo{});
    run_demo(hfdp::AbstractFactoryDemo{});
    run_demo(hfdp::SingletonDemo{});

    return 0;
}

void run_demo(const hfdp::Demo& demo)
{
    demo.run();
}
