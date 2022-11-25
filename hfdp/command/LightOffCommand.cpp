#include "LightOffCommand.hpp"

namespace hfdp::command
{

LightOffCommand::LightOffCommand(const Light& light)
    : light(light)
{}

void LightOffCommand::execute()
{
    light.off();
}

const std::string LightOffCommand::getName() const
{
    return "Light Off";
}

} // namespace hfdp::command