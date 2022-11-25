#include "CeilingFanOffCommand.hpp"

namespace hfdp::command
{

CeilingFanOffCommand::CeilingFanOffCommand(const CeilingFan& ceilingFan)
    : ceilingFan(ceilingFan)
{}

void CeilingFanOffCommand::execute()
{
    ceilingFan.off();
}

const std::string CeilingFanOffCommand::getName() const
{
    return "Ceiling Fan Off";
}

} // namespace hfdp::command