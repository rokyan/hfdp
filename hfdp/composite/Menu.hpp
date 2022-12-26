#pragma once

#include "MenuComponent.hpp"

#include <string>
#include <vector>
#include <memory>

namespace hfdp::composite
{

class Menu final : public MenuComponent
{
public:
    Menu(const std::string& name, const std::string& description);

    Menu(const Menu&) = delete;
    Menu& operator=(const Menu&) = delete;

    Menu(Menu&&) = default;
    Menu& operator=(Menu&&) = delete;

    virtual void add(std::unique_ptr<MenuComponent> component) override;
    virtual void remove(MenuComponent* component) override;
    virtual MenuComponent* get(std::size_t idx) override;

    virtual const std::string& getName() const override;
    virtual const std::string& getDescription() const override;

    virtual void print() const override;

private:
    std::string name;
    std::string description;
    std::vector<std::unique_ptr<MenuComponent>> components;
};

} // namespace hfdp::composite
