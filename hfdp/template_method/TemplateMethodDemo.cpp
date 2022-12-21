#include "TemplateMethodDemo.hpp"
#include "Coffee.hpp"
#include "Tea.hpp"
#include "CoffeeWithHook.hpp"
#include "TeaWithHook.hpp"

#include <iostream>

namespace hfdp
{

template<typename T>
void testBeverage()
{
    T beverage{};
    beverage.prepareRecipe();

    std::cout << std::endl;
}

void TemplateMethodDemo::run() const
{
    using namespace template_method;

    testBeverage<Coffee>();
    testBeverage<CoffeeWithHook>();
    testBeverage<Tea>();
    testBeverage<TeaWithHook>();
}

const std::string TemplateMethodDemo::getName() const
{
    return "Template Method";
}

} // namespace hfdp