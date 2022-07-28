#include "Object.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

    Object* newCircle = new Object(sf::Vector2f(0.0f, 0.0f), 50, sf::Color::Green);
    Object* newCircle2 = new Object(sf::Vector2f(300.0f, 50.0f), 50, sf::Color::Blue);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        newCircle->Update(window);
        newCircle2->Update(window);
        //window.draw(shape);
        window.display();
    }

    return 0;
}