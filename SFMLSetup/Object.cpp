#include "Object.h"

Object::Object(sf::Vector2f _Pos, float _Radius, sf::Color _Color)
{
	m_Shape = new sf::CircleShape();

	m_Shape->setPosition(_Pos);
	m_Shape->setRadius(_Radius);
	m_Shape->setFillColor(_Color);
}

void Object::Update(sf::RenderWindow& _Window)
{
	_Window.draw(*m_Shape);
}
