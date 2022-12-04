#include "AdapterDemo.hpp"
#include "Duck.hpp"
#include "MallardDuck.hpp"
#include "Turkey.hpp"
#include "WildTurkey.hpp"
#include "DuckAdapter.hpp"
#include "TurkeyAdapter.hpp"

#include <memory>
#include <iostream>

namespace hfdp
{

void AdapterDemo::run() const
{
    testTurkeyAdapter();
    testDuckAdapter();
}

void AdapterDemo::testTurkeyAdapter() const
{
    using namespace adapter;

    std::cout << "Test a turkey adapter..." << std::endl << std::endl;

    std::unique_ptr<Turkey> turkey = std::make_unique<WildTurkey>();

    TurkeyAdapter adapter(std::move(turkey));

    for (auto times = 0; times < 5; times++)
    {
        adapter.quack();
        adapter.fly();

        std::cout << std::endl;
    }
}

void AdapterDemo::testDuckAdapter() const
{
    using namespace adapter;

    std::cout << "Test a duck adapter..." << std::endl << std::endl;

    std::unique_ptr<Duck> duck = std::make_unique<MallardDuck>();

    DuckAdapter adapter(std::move(duck));

    for (auto times = 0; times < 5; times++)
    {
        adapter.gobble();
        adapter.fly();

        std::cout << std::endl;
    }
}

const std::string AdapterDemo::getName() const
{
    return "Adapter";
}

} // namespace hfdp