#include "CeilingFanOnCommand.hpp"

namespace hfdp
{

CeilingFanOnCommand::CeilingFanOnCommand(const CeilingFan& ceilingFan)
    : ceilingFan(ceilingFan)
{}

void CeilingFanOnCommand::execute()
{
    ceilingFan.high();
}

const std::string CeilingFanOnCommand::getName() const
{
    return "Ceiling Fan On";
}

} // namespace hfdp