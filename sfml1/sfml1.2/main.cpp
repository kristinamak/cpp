#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({300, 400}), "MKA");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({10, 70});
    shape1.setRotation(0);
    shape1.setPosition({10, 10});
    shape1.setFillColor(sf::Color(149, 10, 70));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({10, 70});
    shape2.setRotation(-26.565);
    shape2.setPosition({10, 14});
    shape2.setFillColor(sf::Color(149, 10, 70));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({10, 70});
    shape3.setRotation(26.575);
    shape3.setPosition({70, 10});
    shape3.setFillColor(sf::Color(149, 10, 70));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({10, 70});
    shape4.setRotation(0);
    shape4.setPosition({70, 10});
    shape4.setFillColor(sf::Color(149, 10, 70));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({10, 70});
    shape5.setRotation(0);
    shape5.setPosition({90, 10});
    shape5.setFillColor(sf::Color(149, 10, 70));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({56.57, 9});
    shape6.setRotation(-45);
    shape6.setPosition({90, 50});
    shape6.setFillColor(sf::Color(149, 10, 70));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({9, 43});
    shape7.setRotation(-45.5);
    shape7.setPosition({100, 50});
    shape7.setFillColor(sf::Color(149, 10, 70));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({9, 72.8});
    shape8.setRotation(16.2);
    shape8.setPosition({170, 10});
    shape8.setFillColor(sf::Color(149, 10, 70));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({72.8, 9});
    shape9.setRotation(70);
    shape9.setPosition({177, 10});
    shape9.setFillColor(sf::Color(149, 10, 70));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({30, 10});
    shape10.setRotation(0);
    shape10.setPosition({160, 50});
    shape10.setFillColor(sf::Color(149, 10, 70));
    window.draw(shape10);

    window.display();

    sf::sleep(sf::seconds(5));
}
