#pragma once

#include "MenuComponent.hpp"

#include <string>

namespace hfdp::composite
{

class MenuItem final : public MenuComponent
{
public:
    MenuItem(const std::string& name, const std::string& description,
        bool vegetarian, double price);

    const std::string& getName() const override;
    const std::string& getDescription() const override;
    bool isVegetarian() const override;
    double getPrice() const override;

    void print() const override;

private:
    std::string name;
    std::string description;
    double price;
    bool vegetarian;
};

} // namespace hfdp::composite
