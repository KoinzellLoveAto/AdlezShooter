
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;
int main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 1000), "SFML Application");
	sf::Sprite shape;
	sf::Texture text;

	if (!text.loadFromFile("asset/playerShip2_blue.png"))
	{
		// not found
	}
	shape.setTexture(text);
	//sf:Vector2f truc = Vector2f(100, 20);
	//shape.setPosition(truc);
	int x = 20;
	while (window.isOpen())
	{
		
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.key.code == sf::Keyboard::Escape)
				x += 10;
		Vector2f truc = Vector2f(100, x);
		shape.setPosition(truc);
		}
		window.clear();
		window.draw(shape);
		window.display();
	}
}

