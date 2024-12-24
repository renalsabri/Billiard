#include "BilliardGame.cpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(Window_Width, Window_Height), "Project Billiard");
    BilliardGame game(window);  
    game.run();
    return 0;
}