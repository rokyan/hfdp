#pragma once

#include "Command.hpp"
#include "Light.hpp"

namespace hfdp
{

class LightOnCommand final : public Command
{
public:
    LightOnCommand(const Light& light);

    virtual void execute() override;

private:
    Light light;
};

} // namespace hfdp
