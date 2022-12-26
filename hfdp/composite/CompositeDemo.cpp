#include "CompositeDemo.hpp"
#include "MenuComponent.hpp"
#include "Menu.hpp"
#include "MenuItem.hpp"
#include "Waitress.hpp"

#include <memory>
#include <utility>

namespace hfdp
{

void CompositeDemo::run() const
{
    using namespace composite;

    auto pancakeHouseMenu = std::make_unique<Menu>("PANCAKE HOUSE MENU", "Breakfast");
    auto dinerMenu = std::make_unique<Menu>("DINER MENU", "Lunch");
    auto cafeMenu = std::make_unique<Menu>("CAFE MENU", "Dinner");
    auto dessertMenu = std::make_unique<Menu>("DESSERT MENU", "Dessert of course!");

    pancakeHouseMenu->add(std::make_unique<MenuItem>(
        "K&B's Pancake Breakfast",
        "Pancakes with scrambled eggs and toast",
        true,
        2.99));
    pancakeHouseMenu->add(std::make_unique<MenuItem>(
        "Regular Pancake Breakfast",
        "Pancakes with fried eggs, sausage",
        false,
        2.99));
    pancakeHouseMenu->add(std::make_unique<MenuItem>(
        "Blueberry Pancakes",
        "Pancakes made with fresh blueberries and blueberry syrup",
        true,
        3.49));
    pancakeHouseMenu->add(std::make_unique<MenuItem>(
        "Waffles",
        "Waffles with your choice of blueberries or strawberries",
        true,
        3.59));

    dinerMenu->add(std::make_unique<MenuItem>(
        "Vegetarian BLT",
        "(Fakin') Bacon with lettuce & tomato on whole wheat",
        true,
        2.99));
    dinerMenu->add(std::make_unique<MenuItem>(
        "BLT",
        "Bacon with lettuce & tomato on whole wheat",
        false,
        2.99));
    dinerMenu->add(std::make_unique<MenuItem>(
        "Soup of the day",
        "A bowl of the soup of the day, with a side of potato salad",
        false,
        3.29));
    dinerMenu->add(std::make_unique<MenuItem>(
        "Hot Dog",
        "A hot dog, with saurkraut, relish, onions, topped with cheese",
        false,
        3.05));
    dinerMenu->add(std::make_unique<MenuItem>(
        "Steamed Veggies and Brown Rice",
        "A medly of steamed vegetables over brown rice",
        true,
        3.99));
    dinerMenu->add(std::make_unique<MenuItem>(
        "Pasta",
        "Spaghetti with marinara sauce, and a slice of sourdough bread",
        true,
        3.89));

    dessertMenu->add(std::make_unique<MenuItem>(
        "Apple Pie",
        "Apple pie with a flakey crust, topped with vanilla icecream",
        true,
        1.59));
    dessertMenu->add(std::make_unique<MenuItem>(
        "Cheesecake",
        "Creamy New York cheesecake, with a chocolate graham crust",
        true,
        1.99));
    dessertMenu->add(std::make_unique<MenuItem>(
        "Sorbet",
        "A scoop of raspberry and a scoop of lime",
        true,
        1.89));

    cafeMenu->add(std::make_unique<MenuItem>(
        "Veggie Burger and Air Fries",
        "Veggie burger on a whole wheat bun, lettuce, tomato, and fries",
        true,
        3.99));
    cafeMenu->add(std::make_unique<MenuItem>(
        "Soup of the day",
        "A cup of the soup of the day, with a side salad",
        false,
        3.69));
    cafeMenu->add(std::make_unique<MenuItem>(
        "Burrito",
        "A large burrito, with whole pinto beans, salsa, guacamole",
        true,
        4.29));

    dinerMenu->add(std::move(dessertMenu));

    auto allMenus = std::make_unique<Menu>("ALL MENUS", "All menus combined");
    allMenus->add(std::move(pancakeHouseMenu));
    allMenus->add(std::move(dinerMenu));
    allMenus->add(std::move(cafeMenu));


    Waitress waitress{ std::move(allMenus) };
    waitress.printMenu();
}

const std::string CompositeDemo::getName() const
{
    return "Composite";
}

} // namespace hfdp