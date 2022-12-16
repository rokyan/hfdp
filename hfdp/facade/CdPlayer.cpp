#include "CdPlayer.hpp"

namespace hfdp::facade
{

CdPlayer::CdPlayer(const std::string& description)
    : Appliance(description)
{}

void CdPlayer::on()
{
    print("on");
}

void CdPlayer::off()
{
    print("off");
}

void CdPlayer::eject()
{
    title = "";
    print("eject");
}

void CdPlayer::play(const std::string& title)
{
    this->title = title;
    track = 0;

    print("playing", title);
}

void CdPlayer::play(int track)
{
    this->track = track;
    print("playing track", track);
}

void CdPlayer::stop()
{
    track = 0;

    print("stopped");
}

void CdPlayer::pause()
{
    print("paused");
}

} // namespace hfdp::facade