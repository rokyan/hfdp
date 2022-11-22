#include "NoCommand.hpp"

namespace hfdp
{

void NoCommand::execute() {}

const std::string NoCommand::getName() const
{
    return "None";
}

} // namespace hfdp