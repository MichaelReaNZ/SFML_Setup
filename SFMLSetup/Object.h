#pragma once
#include <SFML/Graphics.hpp>
class Object
{
public:

	Object(sf::Vector2f _Pos, float _Radius, sf::Color _Col);
	
	void Update(sf::RenderWindow& _Window);

	
	sf::CircleShape* m_Shape;
};

