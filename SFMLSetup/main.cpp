#include "Object.h"
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

    Object* greenCircle = new Object(sf::Vector2f(0.0f, 0.0f), 50, sf::Color::Green);
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
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
		  {
				std::cout << "Left mouse button pressed" << std::endl;
				if(greenCircle->m_Shape->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(window))))
				{
					//change color red
				   greenCircle->m_Shape->setFillColor(sf::Color::Red);
				}
            else {
					//change color green
               greenCircle->m_Shape->setFillColor(sf::Color::Green);
            }
		  }
		
	 
		  
		
        greenCircle->Update(window);
        newCircle2->Update(window);
        //window.draw(shape);
        window.display();
    }

    return 0;
}