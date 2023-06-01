// ConsoleGame.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
#include "Global.h"
#include "ConsoleScreen.h"
#include "int4.h"
#include "Player.h"
#include "Wall.h"
#include "Bullet.h"
#include <Windows.h>
#include <vector>

int main()
{
    ConsoleScreen Screen;
    Screen.Init('*');

    Player MainPlayer;
    // 클래스의경우에는 

    MainPlayer.SetPos({ 10, 5 });

    Wall ArrWall[5];
   

    std::vector<Bullet*> BulletVector;
    BulletVector.reserve(1000);

    for (int i = 0; i < 5; i++)
    {
        ArrWall[i].SetPos({ 5, i });
    }

    while (true)
    {
        Screen.Clear();
        Screen.SetPixel(MainPlayer.GetPos(), 'a');
        
        for (size_t i = 0; i < BulletVector.size(); i++)
        {
            if (true == BulletVector[i]->IsActive())
            {
                Screen.SetPixel(BulletVector[i]->GetPos(), '1');
                BulletVector[i]->AddPos(Globalvalue::Up);
            }
        }


        for (size_t i = 0; i < 5; i++)
        {
           
            if (false == ArrWall[i].IsActive())
            {
                continue;
            }

            Screen.SetPixel(ArrWall[i].GetPos(), 'I');
        }


        Screen.Print();

        if (_kbhit() != 0)
        {
            bool isFire = MainPlayer.Input(&Screen, ArrWall);

            if (isFire)
            {
                Bullet* NewBullet = new Bullet();
                BulletVector.push_back(NewBullet);
                NewBullet->On();

                NewBullet->SetPos(MainPlayer.GetPos());
            }
        }
        Sleep(200);
    }


}
