//
// Created by Bartłomiej Binda on 21/05/2019.
//

#ifndef SFML_LEVEL_H
#define SFML_LEVEL_H

#include <iostream>
#include <fstream>
#include <vector>
#include "../Headers/Entity.hpp"
#include "../Headers/block.hpp"

const int X_BLOCKS = 15;
const int Y_BLOCKS = 11;

class Level
{
public:
    typedef std::vector<Entity *> Vunits;

    Level();

    ~Level();

    bool Add(Entity *unit);

    bool Remove(Entity *unit);

    bool Exists(Entity *unit) const;

    std::size_t Cleanup();

    void Update(const float &deltaTime);

    void Draw();
    inline std::size_t Count() const { return units.size(); }
private:
    Vunits units;		// Aktorzy na scenie.
};

void setMap(Level *currentLevel);

#endif //SFML_LEVEL_H
