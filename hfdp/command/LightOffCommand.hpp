#pragma once

#include "Command.hpp"
#include "Light.hpp"

namespace hfdp::command
{

class LightOffCommand final : public Command
{
public:
    LightOffCommand(const Light& light);

    virtual void execute() override;

    virtual const std::string getName() const override;

private:
    Light light;
};

} // namespace hfdp::command
