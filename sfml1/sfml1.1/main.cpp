#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({300, 400}), "traffic light");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({120, 320});
    shape1.setRotation(0);
    shape1.setPosition({20, 20});
    shape1.setFillColor(sf::Color(133, 133, 133));
    window.draw(shape1);

    sf::CircleShape shape2(45);
    shape2.setPosition({35, 35});
    shape2.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape2);

    sf::CircleShape shape3(45);
    shape3.setPosition({35, 135});
    shape3.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape3);

    sf::CircleShape shape4(45);
    shape4.setPosition({35, 235});
    shape4.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape4);

    window.display();

    sf::sleep(sf::seconds(5));
}