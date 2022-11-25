#pragma once

namespace hfdp::singleton
{

class ChocolateBoiler
{
public:
    static ChocolateBoiler& getInstance();

    ChocolateBoiler(const ChocolateBoiler&) = delete;
    ChocolateBoiler& operator=(const ChocolateBoiler&) = delete;

    ChocolateBoiler(ChocolateBoiler&&) = delete;
    ChocolateBoiler& operator=(ChocolateBoiler&&) = delete;

    void fill();
    void boil();
    void drain();

    bool isEmpty() const noexcept;
    bool isBoiled() const noexcept;

private:
    ChocolateBoiler();

private:
    bool empty;
    bool boiled;
};

} // namespace hfdp::singleton