#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({330, 300}), "house");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({230, 120});
    shape1.setRotation(0);
    shape1.setPosition({50, 140});
    shape1.setFillColor(sf::Color(139, 71, 38));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({40, 80});
    shape2.setRotation(0);
    shape2.setPosition({70, 180});
    shape2.setFillColor(sf::Color(28, 28, 28));
    window.draw(shape2);

    sf::ConvexShape trapeze;
    trapeze.setFillColor(sf::Color(72, 0, 0));
    trapeze.setPosition(165, 80);
    trapeze.setPointCount(4);
    trapeze.setPoint(0, {-60, 0});
    trapeze.setPoint(1, {+60, 0});
    trapeze.setPoint(2, {+140, 60});
    trapeze.setPoint(3, {-140, 60});
    window.draw(trapeze);

    sf::RectangleShape shape3;
    shape3.setSize({34, 20});
    shape3.setRotation(-90);
    shape3.setPosition({200, 110});
    shape3.setFillColor(sf::Color(50, 50, 50));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({30, 20});
    shape4.setRotation(0);
    shape4.setPosition({195, 56});
    shape4.setFillColor(sf::Color(50, 50, 50));
    window.draw(shape4);

    sf::CircleShape shape5(7);
    shape5.setPosition({210, 41});
    shape5.setFillColor(sf::Color(130, 130, 130));
    window.draw(shape5);

    sf::CircleShape shape6(10);
    shape6.setPosition({215, 32});
    shape6.setFillColor(sf::Color(130, 130, 130));
    window.draw(shape6);

    sf::CircleShape shape7(12);
    shape7.setPosition({220, 22});
    shape7.setFillColor(sf::Color(130, 130, 130));
    window.draw(shape7);

    sf::CircleShape shape8(14);
    shape8.setPosition({225, 10});
    shape8.setFillColor(sf::Color(130, 130, 130));
    window.draw(shape8);

    window.display();

    sf::sleep(sf::seconds(5));
}