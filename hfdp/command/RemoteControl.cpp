#include "RemoteControl.hpp"
#include "NoCommand.hpp"

#include <utility>

namespace hfdp
{

RemoteControl::RemoteControl()
    : onCommands(SLOTS_NUMBER)
    , offCommands(SLOTS_NUMBER)
{
    for (std::size_t slot = 0; slot < SLOTS_NUMBER; slot++)
    {
        onCommands[slot] = std::make_unique<NoCommand>();
        offCommands[slot] = std::make_unique<NoCommand>();
    }
}

void RemoteControl::setCommand(std::size_t slot, std::unique_ptr<Command> onCommand, std::unique_ptr<Command> offCommand)
{
    onCommands[slot] = std::move(onCommand);
    offCommands[slot] = std::move(offCommand);
}

void RemoteControl::onButtonWasPushed(std::size_t slot)
{
    onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(std::size_t slot)
{
    offCommands[slot]->execute();
}

std::ostream& operator<<(std::ostream& os, const RemoteControl& remoteControl)
{
    for (std::size_t slot = 0; slot < RemoteControl::SLOTS_NUMBER; slot++)
    {
        os << "[" << remoteControl.onCommands[slot]->getName() << ", " << remoteControl.offCommands[slot]->getName() << "]" << std::endl;
    }

    return os;
}

} // namespace hfdp