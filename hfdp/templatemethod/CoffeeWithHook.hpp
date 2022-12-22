#pragma once

#include "CaffeineBeverageWithHook.hpp"

namespace hfdp::template_method
{

class CoffeeWithHook final : public CaffeineBeverageWithHook
{
public:
    virtual void brew() override;
    virtual void addCondiments() override;
    virtual bool customerWantsCondiments() const noexcept override;
};

} // namespace hfdp::template_method
