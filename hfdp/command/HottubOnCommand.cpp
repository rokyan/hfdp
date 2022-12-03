#include "HottubOnCommand.hpp"

namespace hfdp::command
{

HottubOnCommand::HottubOnCommand(const Hottub& hottub)
    : hottub(hottub)
{}

void HottubOnCommand::execute()
{
    hottub.on();
}

const std::string HottubOnCommand::getName() const
{
    return "Hottub On";
}

} // namespace hfdp::command
