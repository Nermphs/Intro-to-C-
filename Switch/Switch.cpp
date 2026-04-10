#include "Switch.h"

Player applyPotion(PotionType potion, Player player)
{
    //Switch the case based on the potion type
    //Apply coresponding effects
    switch (potion)
    {
    case HEALTH:
        player.health = 100;
        break;

    case SPEED:
        player.speed = 50;
        player.health -= 10;
        player.strength -= 10;
        player.magic = 10;
        break;

    case STRENGTH:
        player.speed = 25;
        player.health *= 2;
        player.strength = 200;
        break;

    case MAGIC:
        player.strength = 10;
        player.magic = 100;
        break;
    }

    return player;
}