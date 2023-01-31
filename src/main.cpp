#include <SFML/Graphics.hpp>

#include "main.hpp"

int main()
{
    auto window = sf::RenderWindow{ { 500, 500 }, "CMake SFML Project" };
    window.setFramerateLimit(144);

    sf::Text text;

    // set the string to display
    text.setString("Hello world");

    // set the font
    sf::Font font;
    if (!font.loadFromFile("fonts/arial.ttf"))
    {
        // error...
    }
    text.setFont(font);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.draw(text);
        window.display();

    }
}