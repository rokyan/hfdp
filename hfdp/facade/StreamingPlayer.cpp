#include "StreamingPlayer.hpp"

#include <iostream>

namespace hfdp::facade
{

StreamingPlayer::StreamingPlayer(const std::string& description)
    : description(description)
    , chapter(0)
{}

void StreamingPlayer::on()
{
    std::cout << description << " on" << std::endl;
}

void StreamingPlayer::off()
{
    std::cout << description << " off" << std::endl;
}

void StreamingPlayer::play(const std::string& movie)
{
    this->movie = movie;

    chapter = 0;

    std::cout << description << " playing " << movie << std::endl;
}

void StreamingPlayer::play(int chapter)
{
    this->chapter = chapter;

    std::cout << description << " playing chapter " << chapter << " of movie " << movie << std::endl;
}

void StreamingPlayer::stop()
{
    chapter = 0;

    std::cout << description << " stopped " << movie << std::endl;
}

void StreamingPlayer::pause()
{
    std::cout << description << " stopped " << movie << std::endl;
}

void StreamingPlayer::setTwoChannelAudio()
{
    std::cout << description << " set two channel audio" << std::endl;
}

void StreamingPlayer::setSurroundAudio()
{
    std::cout << description << " set surround audio" << std::endl;
}

} // namespace hfdp::facade