#pragma once

#include <iostream>
#include <utility>
#include <string>

namespace hfdp::facade
{

class Appliance
{
public:
    Appliance(const std::string& description);

protected:
    template<typename... Args>
    void print(Args&&... args)
    {
        std::cout << "[" << description << "]";
        ((std::cout << " " << std::forward<Args>(args)), ...) << std::endl;
    }

private:
    std::string description;
};

} // namespace hfdp::facade
