
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
        // ������ �׳� ���� �ȴ�.
        // => ���� �������.
        // => �����Ϸ��� �⺻�������� �����Ǿ� �ִ�.
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

            // ȭ�� �ٱ����� ������ �ʾҴٸ� <= �ൿ true
            // ���� �̵��Ѵ�.
            // 4 5 + -1 0
            // 3 5 
            // int4 NextPos = GetPos() + Left;
            //if (false == _Sreen->IsScreenOut(GetPos() + Left))
            //{
            //    AddPos(Left);
            //}

            // ������ ���ƿ´�.
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

