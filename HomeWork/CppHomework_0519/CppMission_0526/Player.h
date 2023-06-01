#pragma once

#include "int4.h"
#include <conio.h>
#include <vector>

class Wall;
class Bullet;
class ConsoleScreen;
class Player 
{
public:
    

    int4 GetPos() const;
    

    void AddPos(const int4& _Pos);
   


    void SetPos(const int4& _Pos);
    

    // 생성자에는 붙일수가 없다.
    Player();

    Player(const Player&) = delete;

    bool Input(ConsoleScreen* _Sreen, Wall* _Wall);

    bool IsWallCheck(Wall* _Wall, int4 _Pos);

    void On()
    {
        isActiveValue = true;
    }

    void Off()
    {
        isActiveValue = false;
    }

    bool IsActive()
    {
        return isActiveValue;
    }
    

protected:

private:


    bool isActiveValue = true;
    int4 Pos;
};
