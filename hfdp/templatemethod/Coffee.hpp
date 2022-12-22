#pragma once

#include "CaffeineBeverage.hpp"

namespace hfdp::template_method
{

class Coffee final : public CaffeineBeverage
{
public:
    virtual void brew() override;
    virtual void addCondiments() override;
};

} // namespace hfdp::template_method
