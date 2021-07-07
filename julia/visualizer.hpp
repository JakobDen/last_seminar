#pragma once

#include <iomanip>
#include <iostream>
#include <sstream>

#include <SFML/Graphics.hpp>

#include "calculator.hpp"
#include "view.hpp"

class Visualizer
{
public:

	Visualizer(std::complex<double> Julia_const) :
		m_window(sf::VideoMode(1500U, 1500U), "JULIA VISUALIZER", sf::Style::Close),
		m_calculator(m_window.getSize().x, m_window.getSize().y, 300U, Julia_const), m_need_redraw(true),
		m_view(sf::Vector2f(0.0f, 0.0f), 2.0f, 2.0f / (m_calculator.width() / m_calculator.height()))
	{
		initialize();
	}

	~Visualizer() noexcept = default;

private:

	void initialize();

public:

    void run();

private:

    void review();
    void update();
    void render();

private:

    void handle_key_pressed(sf::Keyboard::Key code);

private:

    sf::RenderWindow m_window;
    sf::Image        m_image;
    sf::Sprite       m_sprite;
    sf::Texture      m_texture;
    sf::Font         m_font;
    sf::Text         m_text;


    Calculator m_calculator;

	bool m_need_redraw;

    View m_view;

    std::vector < sf::Color > m_colors;
};