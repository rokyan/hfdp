#include "MacroCommand.hpp"

#include <utility>

namespace hfdp::command
{

MacroCommand::MacroCommand(std::vector<std::unique_ptr<Command>>&& commands)
    : commands(std::move(commands))
{}

void MacroCommand::execute()
{
    for (auto& command : commands)
    {
        command->execute();
    }
}

const std::string MacroCommand::getName() const
{
    return "Macro Command";
}

} // namespace hfdp::command