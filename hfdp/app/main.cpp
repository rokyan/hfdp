#include "../strategy/StrategyDemo.hpp"
#include "../observer/ObserverDemo.hpp"
#include "../decorator/DecoratorDemo.hpp"

void run_demo(const hfdp::Demo&);

int main()
{
    run_demo(hfdp::StrategyDemo{});
    run_demo(hfdp::ObserverDemo{});
    run_demo(hfdp::DecoratorDemo{});

    return 0;
}

void run_demo(const hfdp::Demo& demo)
{
    demo.run();
}
