#include "StereoOnCommand.hpp"

namespace hfdp::command
{

StereoOnCommand::StereoOnCommand(const Stereo& stereo)
    : stereo(stereo)
{}

void StereoOnCommand::execute()
{
    stereo.on();
}

const std::string StereoOnCommand::getName() const
{
    return "Stereo On";
}

} // namespace hfdp::command