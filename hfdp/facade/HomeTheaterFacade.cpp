#include "HomeTheaterFacade.hpp"

#include <iostream>

namespace hfdp::facade
{

HomeTheaterFacade::HomeTheaterFacade(
    const Amplifier& amplifier,
    const Tuner& tuner,
    const StreamingPlayer& streamingPlayer,
    const CdPlayer& cdPlayer,
    const Projector& projector,
    const TheaterLights& theaterLights,
    const Screen& screen,
    const PopcornPopper& popcornPopper)
    : amplifier(amplifier)
    , tuner(tuner)
    , streamingPlayer(streamingPlayer)
    , cdPlayer(cdPlayer)
    , projector(projector)
    , theaterLights(theaterLights)
    , screen(screen)
    , popcornPopper(popcornPopper)
{}

void HomeTheaterFacade::watchMovie(const std::string& movie)
{
    std::cout << "Get ready to watch a movie..." << std::endl;

    popcornPopper.on();
    popcornPopper.pop();
    theaterLights.dim(10);
    screen.down();
    projector.on();
    projector.wideScreenMode();
    amplifier.on();
    amplifier.setStreamingPlayer(streamingPlayer);
    amplifier.setSurroundSound();
    amplifier.setVolume(5);
    streamingPlayer.on();
    streamingPlayer.play(movie);
}

void HomeTheaterFacade::endMovie()
{
    std::cout << "Shutting movie theater down..." << std::endl;

    popcornPopper.off();
    theaterLights.on();
    screen.up();
    projector.off();
    amplifier.off();
    streamingPlayer.stop();
    streamingPlayer.off();

}

void HomeTheaterFacade::listenToRadio(double frequency)
{
    std::cout << "Tuning in the airwaves..." << std::endl;

    tuner.on();
    tuner.setFrequency(frequency);
    amplifier.on();
    amplifier.setVolume(5);
    amplifier.setTuner(tuner);
}

void HomeTheaterFacade::endRadio()
{
    std::cout << "Shutting down the tuner..." << std::endl;

    tuner.off();
    amplifier.off();
}

} // namespace hfdp::facade