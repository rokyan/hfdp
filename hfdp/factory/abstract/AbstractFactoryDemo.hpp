#pragma once

#include "Demo.hpp"

namespace hfdp
{

class AbstractFactoryDemo final : public Demo
{
public:
    virtual void run() const override;
};

} // namespace hfdp
