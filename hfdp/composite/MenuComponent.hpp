#pragma once

#include <memory>
#include <string>

namespace hfdp::composite
{

class MenuComponent
{
public:
    virtual void add(std::unique_ptr<MenuComponent> component);
    virtual void remove(MenuComponent* component);
    virtual MenuComponent* get(std::size_t idx);

    virtual const std::string& getName() const;
    virtual const std::string& getDescription() const;
    virtual double getPrice() const;
    virtual bool isVegetarian() const;

    virtual void print() const;

    virtual ~MenuComponent() = default;
};

} // namespace hfdp::composite
