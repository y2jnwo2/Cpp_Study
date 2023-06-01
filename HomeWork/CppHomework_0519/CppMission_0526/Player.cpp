
#include "Player.h"
#include <conio.h>
#include "Global.h"
#include "ConsoleScreen.h"
#include "Wall.h"
#include "Bullet.h"

Player::Player()
{

}

    int4 Player::GetPos() const
    {
        return Pos;
    }

    void Player::AddPos(const int4& _Pos)
    {
        Pos += _Pos;
    }
    bool Player::IsWallCheck(Wall* _Wall, int4 _Pos)
    {
        for (size_t i = 0; i < 5; i++)
        {
            if (_Wall[i].GetPos() == _Pos)
            {
                return true;
            }
        }
        return false;
    }

    void Player::SetPos(const int4& _Pos)
    {
        // 뭔가가 그냥 거저 된다.
        // => 내가 만들었다.
        // => 컴파일러나 기본문법으로 생략되어 있다.
        Pos = _Pos;
    }

    bool Player::Input(ConsoleScreen* _Sreen, Wall* _Wall)
    {
        bool isFire = false;

        char Select = (char)_getch();

        int4 MovePos = { 0, 0 };

        switch (Select)
        {
        case 'a':

            MovePos = Globalvalue::Left;

            // 화면 바깥으로 나가지 않았다면 <= 행동 true
            // 나는 이동한다.
            // 4 5 + -1 0
            // 3 5 
            // int4 NextPos = GetPos() + Left;
            //if (false == _Sreen->IsScreenOut(GetPos() + Left))
            //{
            //    AddPos(Left);
            //}

            // 가고나서 돌아온다.
            //AddPos(Left);
            //if (true == _Sreen->IsScreenOut(GetPos()))
            //{
            //    AddPos(Right);
            //}
            break;
        case 'd':
            MovePos = Globalvalue::Right;

            //if (false == _Sreen->IsScreenOut(GetPos() + Right))
            //{
            //    AddPos(Right);
            //}

            break;
        case 'w':
            MovePos = Globalvalue::Up;

            //if (false == _Sreen->IsScreenOut(GetPos() + Up))
            //{
            //    AddPos(Up);
            //}
            break;
        case 's':
            MovePos = Globalvalue::Down;
            break;
        case 'f':
            isFire = true;
            break;
        default:
            break;
        }

        if (false == _Sreen->IsScreenOut(GetPos() + MovePos)
            && false == IsWallCheck(_Wall, GetPos() + MovePos))
        {
            AddPos(MovePos);
        }
        return isFire;
    }

