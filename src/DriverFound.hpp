#ifndef DRIVEE_DRIVERFOUND_HPP
#define DRIVEE_DRIVERFOUND_HPP

#include "SFML/Graphics.hpp"

class DriverFound : public sf::Drawable {
public:
    DriverFound();
    void draw(sf::RenderTarget &target, sf::RenderStates states)const;
    void handleEvent(sf::Event &event,sf::RenderWindow& win);
    ~DriverFound();
private:
};


#endif
