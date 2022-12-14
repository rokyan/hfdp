#pragma once

#include "Command.hpp"
#include "Light.hpp"

namespace hfdp::command
{

class LightOnCommand final : public Command
{
public:
    LightOnCommand(const Light& light);

    virtual void execute() override;

    virtual const std::string getName() const override;

private:
    Light light;
};

} // namespace hfdp::command
