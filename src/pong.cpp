#include "pong.hpp"

sf::RenderWindow Pong::_window;
sf::Clock Pong::_clock;

void Pong::start() {
  // If the window is already opened, don't do anything
  if (_window.isOpen()) return;

  // Create a new window named "Pong"
  _window.create(sf::VideoMode(Pong::SCREEN_WIDTH,
Pong::SCREEN_HEIGHT, 32), "Pong");

    // Start the game loop
    gameLoop();
}

void Pong::gameLoop() {
  // While the window is open, check for a "close" event and display
  while (_window.isOpen()) {
    float deltaTime = _clock.restart().asSeconds();

    _window.clear(sf::Color::Black);

    sf::Event event;
    while (_window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) { _window.close(); }
    }

    _window.display();
  }
}