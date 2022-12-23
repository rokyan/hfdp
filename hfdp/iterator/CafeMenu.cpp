#include "CafeMenu.hpp"
#include "CafeMenuIterator.hpp"

namespace hfdp::iterator
{

CafeMenu::CafeMenu()
{
    addItem("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", true, 3.99);
    addItem("Soup of the day", "A cup of the soup of the day, with a side salad", false, 3.69);
    addItem("Burrito", "A large burrito, with whole pinto beans, salsa, guacamole", true, 4.29);
}

void CafeMenu::addItem(const std::string& name, const std::string& description, bool vegetarian, double price)
{
    items.emplace(name, MenuItem{ name, description, vegetarian, price });
}

std::unique_ptr<Iterator<MenuItem>> CafeMenu::createIterator() const
{
    return std::make_unique<CafeMenuIterator>(items);
}

} // namespace hfdp::iterator