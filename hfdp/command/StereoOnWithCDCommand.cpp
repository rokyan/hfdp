#include "StereoOnWithCDCommand.hpp"

namespace hfdp
{

StereoOnWithCDCommand::StereoOnWithCDCommand(const Stereo& stereo)
    : stereo(stereo)
{}

void StereoOnWithCDCommand::execute()
{
    stereo.on();
    stereo.setCD();
    stereo.setVolume(11);
}

const std::string StereoOnWithCDCommand::getName() const
{
    return "Stereo On With CD";
}

} // namespace hfdp