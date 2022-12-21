#pragma once

namespace hfdp::template_method
{

class CaffeineBeverage
{
public:
    void prepareRecipe();

    void boilWater();
    virtual void brew() = 0;
    void pourInCup();
    virtual void addCondiments() = 0;

    virtual ~CaffeineBeverage() = default;
};

} // namespace hfdp::template_method
