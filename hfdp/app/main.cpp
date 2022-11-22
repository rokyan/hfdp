#include "../strategy/StrategyDemo.hpp"
#include "../observer/ObserverDemo.hpp"
#include "../decorator/DecoratorDemo.hpp"
#include "../factory/method/FactoryMethodDemo.hpp"
#include "../singleton/SingletonDemo.hpp"
#include "../command/CommandDemo.hpp"

void run_demo(const hfdp::Demo&);

int main()
{
    run_demo(hfdp::StrategyDemo{});
    run_demo(hfdp::ObserverDemo{});
    run_demo(hfdp::DecoratorDemo{});
    run_demo(hfdp::FactoryMethodDemo{});
    run_demo(hfdp::SingletonDemo{});
    run_demo(hfdp::CommandDemo{});

    return 0;
}

void run_demo(const hfdp::Demo& demo)
{
    demo.run();
}
