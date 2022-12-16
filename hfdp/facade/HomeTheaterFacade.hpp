#pragma once

#include "Amplifier.hpp"
#include "Tuner.hpp"
#include "StreamingPlayer.hpp"
#include "CdPlayer.hpp"
#include "Projector.hpp"
#include "TheaterLights.hpp"
#include "Screen.hpp"
#include "PopcornPopper.hpp"

#include <string>

namespace hfdp::facade
{

class HomeTheaterFacade final
{
public:
    HomeTheaterFacade(
        const Amplifier& amplifier,
        const Tuner& tuner,
        const StreamingPlayer& streamingPlayer,
        const CdPlayer& cdPlayer,
        const Projector& projector,
        const TheaterLights& theaterLights,
        const Screen& screen,
        const PopcornPopper& popcornPopper);

    void watchMovie(const std::string& movie);
    void endMovie();

    void listenToRadio(double frequency);
    void endRadio();

private:
    Amplifier amplifier;
    Tuner tuner;
    StreamingPlayer streamingPlayer;
    CdPlayer cdPlayer;
    Projector projector;
    TheaterLights theaterLights;
    Screen screen;
    PopcornPopper popcornPopper;
};

} // namespace hfdp::facade
