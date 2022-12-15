#include "StreamingPlayer.hpp"

namespace hfdp::facade
{

StreamingPlayer::StreamingPlayer(const std::string& description)
    : Appliance(description)
    , chapter(0)
{}

void StreamingPlayer::on()
{
    print("on");
}

void StreamingPlayer::off()
{
    print("on");
}

void StreamingPlayer::play(const std::string& movie)
{
    this->movie = movie;
    chapter = 0;

    print("playing movie", movie);
}

void StreamingPlayer::play(int chapter)
{
    this->chapter = chapter;

    print("playing chapter", chapter, "of movie", movie);
}

void StreamingPlayer::stop()
{
    chapter = 0;

    print("stopped", movie);
}

void StreamingPlayer::pause()
{
    print("paused", movie);
}

void StreamingPlayer::setTwoChannelAudio()
{
    print("set two channel audio");
}

void StreamingPlayer::setSurroundAudio()
{
    print("set surround audio");
}

} // namespace hfdp::facade