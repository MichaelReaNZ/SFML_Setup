#include "Object.h"
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    std::vector<Object*> ObjectVector;

    Object* greenCircle = new Object(sf::Vector2f(0.0f, 0.0f), 50, sf::Color::Green);
    ObjectVector.push_back(greenCircle);
	
    Object* blueCircle = new Object(sf::Vector2f(300.0f, 50.0f), 50, sf::Color::Blue);
    ObjectVector.push_back(blueCircle);
	
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

		   //movement
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		  {
				//move the circle down
				greenCircle->m_Shape->move(sf::Vector2f(0.0f, 1.0f));
		  }
		
      //if the w key is pressed
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			//move the circle up
			greenCircle->m_Shape->move(sf::Vector2f(0.0f, -1.0f));
      }
		
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
		
        for (int i = 0; i < ObjectVector.size(); i++) {
           ObjectVector[i]->Update(window);
        }
        window.display();
    }

    return 0;
}