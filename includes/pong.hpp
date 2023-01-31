#ifndef PONG_PONG_H
#define PONG_PONG_H

#include <SFML/Graphics.hpp>

class Pong {
public:
  const static int SCREEN_WIDTH = 720;
  const static int SCREEN_HEIGHT = 480;
  static void start();
  static void gameLoop();

private:
  static sf::RenderWindow _window;
  static sf::Clock _clock;
};

#endif //PONG_PONG_H