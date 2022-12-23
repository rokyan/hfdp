#pragma once

#include <string>

namespace hfdp::iterator
{

class MenuItem final
{
public:
    MenuItem(const std::string& name, const std::string& description,
        bool vegetarian, double price);

    const std::string& getName() const;
    const std::string& getDescription() const;
    bool isVegetarian() const noexcept;
    double getPrice() const noexcept;

private:
    std::string name;
    std::string description;
    bool vegetarian;
    double price;
};

} // namespace hfdp::iterator
