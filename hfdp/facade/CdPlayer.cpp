#include "CdPlayer.hpp"

#include <iostream>

namespace hfdp::facade
{

CdPlayer::CdPlayer(const std::string& description)
    : description(description)
{}

void CdPlayer::on()
{
    std::cout << description << " on" << std::endl;
}

void CdPlayer::off()
{
    std::cout << description << " off" << std::endl;
}

void CdPlayer::eject()
{
    title = "";

    std::cout << description << " eject" << std::endl;
}

void CdPlayer::play(const std::string& title)
{
    this->title = title;
    track = 0;
    
    std::cout << description << " playing " << title << std::endl;
}

void CdPlayer::play(int track)
{
    this->track = track;

    std::cout << description << " playing track " << track << std::endl;
}

void CdPlayer::stop()
{
    track = 0;

    std::cout << description << " stopped" << std::endl;
}

void CdPlayer::pause()
{
    std::cout << description << " paused " << title << std::endl;
}

} // namespace hfdp::facade