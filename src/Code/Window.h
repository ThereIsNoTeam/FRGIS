#pragma once
#include <string>
#include <SFML/Graphics.hpp>
class Window													//Pojedy�cze okienko
{
public:
	Window(std::wstring path);
	void onDrag();												//Przesuwa okno, funkcja ma by� wywo�ana w pollEvent()
private:
	sf::Texture texture[2];
	sf::Sprite	sprite[2];										//Obrazek okna i jego wst��ka
};
