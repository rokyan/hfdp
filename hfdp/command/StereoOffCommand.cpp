#include "StereoOffCommand.hpp"

namespace hfdp::command
{

StereoOffCommand::StereoOffCommand(const Stereo& stereo)
    : stereo(stereo)
{}

void StereoOffCommand::execute()
{
    stereo.off();
}

const std::string StereoOffCommand::getName() const
{
    return "Stereo Off";
}

} // namespace hfdp::command