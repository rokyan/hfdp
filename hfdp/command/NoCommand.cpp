#include "NoCommand.hpp"

namespace hfdp::command
{

void NoCommand::execute() {}

const std::string NoCommand::getName() const
{
    return "None";
}

} // namespace hfdp::command