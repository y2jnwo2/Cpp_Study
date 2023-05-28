// 056_LocalStatic.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 전역

//class Player
//{
//public: // <= 클래스 내부의 요소를 공개한다.
//
//
//    // 맴버
//
//    void Function()
//    {
//        static int Value = 0;
//
//        // 지역
//    }
//};

void Function()
{
    // 이 함수 내부에서만 사용할수 있는 전역변수가 된다.
    static int Value = 0;
    printf_s("%d\n", Value);
    ++Value;
}

// 게임 시작할때 준비하는 함수.
// 텍스처를 로딩하거나 플레이어를 만들거나.
// 이 게임에서 플레이너는 1명이야.
void GameInit()
{
    {
        static bool Once = false;

        if (true == Once)
        {
            return;
        }

        printf_s("플레이어 만들고 준비하고 뭐뭐뭐 하고\n");
        // 플레이어를 만든다.

        Once = true;
    }

    {
        static bool Once = false;

        if (true == Once)
        {
            return;
        }

        printf_s("플레이어 만들고 준비하고 뭐뭐뭐 하고\n");
        // 플레이어를 만든다.

        Once = true;
    }


    {
        static bool Once = false;

        if (true == Once)
        {
            return;
        }

        printf_s("플레이어 만들고 준비하고 뭐뭐뭐 하고\n");
        // 플레이어를 만든다.

        Once = true;
    }

}


int main()
{/*
    GameInit();
    GameInit();
    GameInit();
    GameInit();*/

    Function();
    Function();
    Function();
    Function();
    Function();

    // 지역

    // 로컬
    class Player
    {

    };

    std::cout << "Hello World!\n";
}
