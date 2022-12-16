#include "FacadeDemo.hpp"
#include "HomeTheaterFacade.hpp"
#include "Amplifier.hpp"
#include "Tuner.hpp"
#include "StreamingPlayer.hpp"
#include "CdPlayer.hpp"
#include "Projector.hpp"
#include "TheaterLights.hpp"
#include "Screen.hpp"
#include "PopcornPopper.hpp"

namespace hfdp
{

void FacadeDemo::run() const
{
    using namespace facade;

    Amplifier amplifier("Amplfier");
    Tuner tuner("AM/FM Tuner");
    StreamingPlayer streamingPlayer("Streaming Player");
    CdPlayer cdPlayer("CD Player");
    Projector projector("Projector");
    TheaterLights theaterLights("Theater Ceiling Lights");
    Screen screen("Theater Screen");
    PopcornPopper popcornPopper("Popcorn Popper");

    HomeTheaterFacade facade(amplifier, tuner, streamingPlayer, cdPlayer, projector, theaterLights, screen, popcornPopper);

    facade.watchMovie("Lord Of The Rings");
    facade.endMovie();

    facade.listenToRadio(104.9);
    facade.endRadio();
}

const std::string FacadeDemo::getName() const
{
    return "Facade";
}

} // namespace hfdp