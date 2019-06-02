//
// Created by Bartłomiej Binda on 21/05/2019.
//

#ifndef SFML_BLOCK_HPP
#define SFML_BLOCK_HPP

#include "Entity.hpp"


enum BlockType{
    Background = 0,
    Explosive = 1,
    Solid = 2
};

class Block : public Entity
{
private:
    sf::Sprite bsprite;
    BlockType type;
public:
    explicit Block(BlockType);

    virtual void SetLocation(const sf::Vector2f& loc) override;
    virtual void Draw() override;

    inline BlockType GetType() const { return type; }
};

class BlockController : public EntityController
{

public:
    explicit BlockController();

    virtual void Update(const float& deltaTime) override;
};


#endif //SFML_BLOCK_HPP
