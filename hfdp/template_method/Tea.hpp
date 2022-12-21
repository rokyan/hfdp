#pragma once

#include "CaffeineBeverage.hpp"

namespace hfdp::template_method
{

class Tea final : public CaffeineBeverage
{
public:
    virtual void brew() override;
    virtual void addCondiments() override;
};

} // hfdp::template_method
