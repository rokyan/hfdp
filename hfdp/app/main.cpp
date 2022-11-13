#include "Demo.hpp"
#include "../strategy/strategy_demo.hpp"
#include "../observer/observer_demo.hpp"
#include "../decorator/DecoratorDemo.hpp"

void run_demo(const hfdp::Demo& demo)
{
    demo.run();
}

int main()
{
    // run_demo(hfdp::strategy_demo{});
    // run_demo(hfdp::observer_demo{});
     run_demo(hfdp::DecoratorDemo{});

    return 0;
}
