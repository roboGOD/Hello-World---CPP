#include "classesLesson.h"
#include "newLib.h"


void Player::Move(int xa, int ya)
{
    x += xa*speed;
    y += ya*speed;
}

void Player::Display()
{
    Log("X, Y, Speed:");
    PrintItAll(x);
    PrintItAll(y);
    PrintItAll(speed);
    Log("!!!!!!!!!!!!!!!!!!!!!");
}


