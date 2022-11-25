#include "HottubOffCommand.hpp"

namespace hfdp
{

HottubOffCommand::HottubOffCommand(const Hottub& hottub)
    : hottub(hottub)
{}

void HottubOffCommand::execute()
{
    hottub.off();
}

const std::string HottubOffCommand::getName() const
{
    return "Hottub Off";
}

} // namespace hfdp
