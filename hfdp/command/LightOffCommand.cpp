#include "LightOffCommand.hpp"

namespace hfdp
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

} // namespace hfdp