#include <SFML/Graphics.hpp>

int main()
{
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Circle");

    // Create a circle shape
    sf::CircleShape circle(50.0f);
    circle.setFillColor(sf::Color::Blue);
    circle.setPosition(375.0f, 275.0f);

    while (window.isOpen())
    {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear();

        // Draw the circle
        window.draw(circle);

        // Display the window contents
        window.display();
    }

    return 0;
}
