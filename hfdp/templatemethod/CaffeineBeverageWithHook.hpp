#pragma once

namespace hfdp::template_method
{

class CaffeineBeverageWithHook
{
public:
    void prepareRecipe();

    void boilWater();
    virtual void brew() = 0;
    void pourInCup();
    virtual bool customerWantsCondiments() const noexcept;
    virtual void addCondiments() = 0;

    virtual ~CaffeineBeverageWithHook() = default;
};

} // namespace hfdp::template_method
