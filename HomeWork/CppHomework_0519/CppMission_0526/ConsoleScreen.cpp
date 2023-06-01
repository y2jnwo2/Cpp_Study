
#include "ConsoleScreen.h"
#include <iostream>
#include <conio.h>
#include "Global.h"   

    void ConsoleScreen::Init(char _BaseCh)
    {
        BaseCh = _BaseCh;
        Clear();
    }

    void ConsoleScreen::SetPixel(const int4& _Pos, char _Ch)
    {
        if (IsScreenOut(_Pos))
        {
            return;
        }
        ArrScreen[_Pos.Y][_Pos.X] = _Ch;
    }

    void ConsoleScreen::Clear()
    {
        system("cls");
        for (size_t y = 0; y < Globalvalue::YLine; y++)
        {
            for (size_t x = 0; x < Globalvalue::XLine; x++)
            {
                ArrScreen[y][x] = BaseCh;
            }
            ArrScreen[y][Globalvalue::XLine] = 0;
        }
    }

    bool ConsoleScreen::IsScreenOut(const int4& _Pos) const
    {
        if (0 > _Pos.X)
        {
            return true;
        }

        if (0 > _Pos.Y)
        {
            return true;
        }

        if (Globalvalue::XLine <= _Pos.X)
        {
            return true;
        }

        if (Globalvalue::YLine <= _Pos.Y)
        {
            return true;
        }

        return false;
    }


    void ConsoleScreen::Print() const
    {
        for (size_t y = 0; y < Globalvalue::YLine; y++)
        {
            printf_s(ArrScreen[y]);
            printf_s("\n");
        }
    }


