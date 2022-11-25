#include "TVOffCommand.hpp"

namespace hfdp
{

TVOffCommand::TVOffCommand(const TV& tv)
    : tv(tv)
{}

void TVOffCommand::execute()
{
    tv.off();
}

const std::string TVOffCommand::getName() const
{
    return "TV Off";
}

} // namespace hfdp
