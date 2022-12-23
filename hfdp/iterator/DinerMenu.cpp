#include "DinerMenu.hpp"
#include "DinerMenuIterator.hpp"

namespace hfdp::iterator
{

DinerMenu::DinerMenu()
{
    addItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
    addItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
    addItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);
    addItem("Hotdog", "A hot dog, with sauerkraut, relish, onions, topped with cheese", false, 3.05);
    addItem("Steamed Veggies and Brown Rice", "A medly of steamed vegetables over brown rice", true, 3.99);
    addItem("Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread", true, 3.89);
}

void DinerMenu::addItem(const std::string& name, const std::string& description, bool vegetarian, double price)
{
    items.emplace_back(name, description, vegetarian, price);
}

std::unique_ptr<Iterator<MenuItem>> DinerMenu::createIterator() const
{
    return std::make_unique<DinerMenuIterator>(items);
}

} // namespace hfdp::iterator