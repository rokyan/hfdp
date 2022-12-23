#include "../strategy/StrategyDemo.hpp"
#include "../observer/ObserverDemo.hpp"
#include "../decorator/DecoratorDemo.hpp"
#include "../factory/method/FactoryMethodDemo.hpp"
#include "../factory/abstract/AbstractFactoryDemo.hpp"
#include "../singleton/SingletonDemo.hpp"
#include "../command/CommandDemo.hpp"
#include "../adapter/AdapterDemo.hpp"
#include "../facade/FacadeDemo.hpp"
#include "../templatemethod/TemplateMethodDemo.hpp"
#include "../iterator/IteratorDemo.hpp"

#include <iostream>

void run_demo(const hfdp::Demo&);

int main()
{
    run_demo(hfdp::StrategyDemo{});
    run_demo(hfdp::ObserverDemo{});
    run_demo(hfdp::DecoratorDemo{});
    run_demo(hfdp::FactoryMethodDemo{});
    run_demo(hfdp::AbstractFactoryDemo{});
    run_demo(hfdp::SingletonDemo{});
    run_demo(hfdp::CommandDemo{});
    run_demo(hfdp::AdapterDemo{});
    run_demo(hfdp::FacadeDemo{}); 
    run_demo(hfdp::TemplateMethodDemo{});
    run_demo(hfdp::IteratorDemo{});

    return 0;
}

void run_demo(const hfdp::Demo& demo)
{
    std::cout << "Running a demo for " << demo.getName() << " pattern:" << std::endl << std::endl;

    demo.run();

    std::cout << std::endl;
}
