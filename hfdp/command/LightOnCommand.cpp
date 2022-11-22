#include "LightOnCommand.hpp"

namespace hfdp
{

LightOnCommand::LightOnCommand(const Light& light)
    : light(light)
{}

void LightOnCommand::execute()
{
    light.on();
}

const std::string LightOnCommand::getName() const
{
    return "Light On";
}

} // namespace hfdp