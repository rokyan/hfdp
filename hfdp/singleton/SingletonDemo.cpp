#include "SingletonDemo.hpp"
#include "ChocolateBolier.hpp"

#include <iostream>

namespace hfdp
{

using namespace singleton;

void SingletonDemo::run() const
{
    auto& boiler = ChocolateBoiler::getInstance();
    boiler.fill();
    boiler.boil();
    boiler.drain();

    auto& anotherBoiler = ChocolateBoiler::getInstance();

    std::cout << std::boolalpha << boiler.isEmpty() << std::endl;
}

const std::string SingletonDemo::getName() const
{
    return "Singleton";
}

} // namespace hfdp