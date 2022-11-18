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

} // namespace hfdp