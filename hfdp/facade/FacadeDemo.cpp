#include "FacadeDemo.hpp"
#include "CdPlayer.hpp"

namespace hfdp
{

void FacadeDemo::run() const
{
    using namespace facade;

    CdPlayer player("Hello");
    player.on();
    player.play("Edgar");
}

const std::string FacadeDemo::getName() const
{
    return "Facade";
}

} // namespace hfdp