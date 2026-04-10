#pragma once

enum PotionType
{
    HEALTH,
    SPEED,
    STRENGTH,
    MAGIC
};

struct Player
{
    int health = 30;
    int speed = 10;
    int strength = 15;
    int magic = 30;
};

Player applyPotion(PotionType potion, Player player);
