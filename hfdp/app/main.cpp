#include "../common/demo.hpp"
#include "../strategy/strategy_demo.hpp"
#include "../observer/observer_demo.hpp"

void run_demo(const hfdp::demo&);

int main()
{
     run_demo(hfdp::strategy_demo{});
    //run_demo(hfdp::observer_demo{});

    return 0;
}

void run_demo(const hfdp::demo& demo)
{
    demo.run();
}
