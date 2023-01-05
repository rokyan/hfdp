#pragma once

#include "Demo.hpp"

namespace hfdp
{

class StateDemo final : public Demo
{
public:
    virtual void run() const override;

    virtual const std::string getName() const override;
};

} // namespace hfdp
