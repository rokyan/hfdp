#include "Menu.hpp"

#include <iostream>
#include <utility>

namespace hfdp::composite
{

Menu::Menu(const std::string& name, const std::string& description)
    : name(name)
    , description(description)
{}

void Menu::add(std::unique_ptr<MenuComponent> component)
{
    components.push_back(std::move(component));
}

void Menu::remove(MenuComponent* component)
{
    const auto it = std::find_if(std::cbegin(components), std::cend(components), [component](auto&& e) {
        return e.get() == component;
    });

    if (it != std::cend(components))
    {
        components.erase(it);
    }
}

MenuComponent* Menu::get(std::size_t idx)
{
    if (idx >= std::size(components))
    {
        return nullptr;
    }

    return components[idx].get();
}

const std::string& Menu::getName() const
{
    return name;
}

const std::string& Menu::getDescription() const
{
    return description;
}

void Menu::print() const
{
    std::cout << std::endl;
    std::cout << name << ", " << description << std::endl;
    std::cout << "----------------" << std::endl;

    for (auto&& component : components)
    {
        component->print();
    }
}

} // namespace hfdp::composite