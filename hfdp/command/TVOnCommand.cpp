#include "TVOnCommand.hpp"

namespace hfdp::command
{

TVOnCommand::TVOnCommand(const TV& tv)
    : tv(tv)
{}

void TVOnCommand::execute()
{
    tv.on();
}

const std::string TVOnCommand::getName() const
{
    return "TV On";
}

} // namespace hfdp::command