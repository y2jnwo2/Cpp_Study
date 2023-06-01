//// ConsoleGame.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
////
//
//#include <iostream>
//#include <conio.h>
//#include <Windows.h>
//
//// 1. ���� ����
//// 2. 10���� ��ֹ� ��ġ class Wall
////    Player 
////    Wall 
////    ���� Ŭ������ ��ӹ޾Ƽ� ��������� �Ѵ�.
//// 
//// 3. ��ֹ��� ��� ���ϰ� �ϱ�.
//
//// 4. �÷��̾ ��� Ű�� ������ �÷��̾� ��ġ����
////    �Ѿ� 1���� �߻�ǰ� ���弼��.
//
//// 5. �� �Ѿ� 1�߿� ���� ������ ���� �������� ���弼��.
//
//// ���� �÷��̾ ȭ�� �ٱ����� ������ ���ϰ� �ض�.
//
//const int XLine = 20;
//const int YLine = 10;
//
//
//// �̳༮�� ĸ��ȭ�� Ŭ������� ���ٴ� �⺻�ڷ���
//class int4
//{
//public:
//    int X = 0;
//    int Y = 0;
//    int Z = 0;
//    int W = 1;
//
//    void operator=(const int4& _Other)
//    {
//        X = _Other.X;
//        Y = _Other.Y;
//        Z = _Other.Z;
//        W = _Other.W;
//    }
//
//    void operator+=(const int4& _Other)
//    {
//        X += _Other.X;
//        Y += _Other.Y;
//        Z += _Other.Z;
//        W += _Other.W;
//    }
//
//    int4 operator+(const int4& _Other) const
//    {
//        int4 Return;
//        Return.X = X + _Other.X;
//        Return.Y = Y + _Other.Y;
//        Return.Z = Z + _Other.Z;
//        Return.W = W + _Other.W;
//        return Return;
//    }
//
//
//};
//
//// ���� �̴ϼȶ�����
//const int4 Left = { -1, 0 };
//const int4 Right = { 1, 0 };
//const int4 Up = { 0, -1 };
//const int4 Down = { 0, 1 };
//
//// Init('*')
//
//// [*][*][0] \n
//// [*][*][0] \n
//
//class ConsoleScreen
//{
//public:
//    ConsoleScreen()
//    {
//
//    }
//
//    void Init(char _BaseCh)
//    {
//        BaseCh = _BaseCh;
//        Clear();
//    }
//
//    void SetPixel(const int4& _Pos, char _Ch)
//    {
//        ArrScreen[_Pos.Y][_Pos.X] = _Ch;
//    }
//
//    void Clear()
//    {
//        system("cls");
//        for (size_t y = 0; y < YLine; y++)
//        {
//            for (size_t x = 0; x < XLine; x++)
//            {
//                ArrScreen[y][x] = BaseCh;
//            }
//            ArrScreen[y][XLine] = 0;
//        }
//    }
//
//    bool IsScreenOut(const int4& _Pos) const
//    {
//        if (0 > _Pos.X)
//        {
//            return true;
//        }
//
//        if (0 > _Pos.Y)
//        {
//            return true;
//        }
//
//        if (XLine <= _Pos.X)
//        {
//            return true;
//        }
//
//        if (YLine <= _Pos.Y)
//        {
//            return true;
//        }
//
//        return false;
//    }
//
//
//    void Print() const
//    {
//        for (size_t y = 0; y < YLine; y++)
//        {
//            printf_s(ArrScreen[y]);
//            printf_s("\n");
//        }
//    }
//
//protected:
//
//
//private:
//    char BaseCh = ' ';
//    char ArrScreen[YLine][XLine + 1] = {};
//};
//
//class Player
//{
//public:
//    // ���۷����� �⺻������ 8����Ʈ �����Դϴ�.
//    // int4�� �׳� 16����Ʈ�Դϴ�.
//    // int4&�� �׳� 8����Ʈ�Դϴ�.
//    // int4*�� �׳� 8����Ʈ�Դϴ�.
//
//    // ���� �������� ���ڰ� ���ļ� 8����Ʈ�� �Ѿ��
//    // �װ� ����ü�� Ŭ������ ��� �������·� �ѱ�°� ��κ��� ��Ȳ����
//    // ������ �̵��̴�.
//
//    int4 GetPos() const
//    {
//        return Pos;
//    }
//
//    void AddPos(const int4& _Pos)
//    {
//        Pos += _Pos;
//    }
//
//
//    void SetPos(const int4& _Pos)
//    {
//        // ������ �׳� ���� �ȴ�.
//        // => ���� �������.
//        // => �����Ϸ��� �⺻�������� �����Ǿ� �ִ�.
//        Pos = _Pos;
//    }
//
//    // �����ڿ��� ���ϼ��� ����.
//    Player()
//        : Pos()
//    {
//    }
//
//    Player(const Player&) = delete;
//
//    void Input(ConsoleScreen* _Sreen)
//    {
//        char Select = (char)_getch();
//
//        int4 MovePos = { 0, 0 };
//
//        switch (Select)
//        {
//        case 'a':
//
//            MovePos = Left;
//
//            // ȭ�� �ٱ����� ������ �ʾҴٸ� <= �ൿ true
//            // ���� �̵��Ѵ�.
//            // 4 5 + -1 0
//            // 3 5 
//            // int4 NextPos = GetPos() + Left;
//            //if (false == _Sreen->IsScreenOut(GetPos() + Left))
//            //{
//            //    AddPos(Left);
//            //}
//
//            // ������ ���ƿ´�.
//            //AddPos(Left);
//            //if (true == _Sreen->IsScreenOut(GetPos()))
//            //{
//            //    AddPos(Right);
//            //}
//            break;
//        case 'd':
//            MovePos = Right;
//
//            //if (false == _Sreen->IsScreenOut(GetPos() + Right))
//            //{
//            //    AddPos(Right);
//            //}
//
//            break;
//        case 'w':
//            MovePos = Up;
//
//            //if (false == _Sreen->IsScreenOut(GetPos() + Up))
//            //{
//            //    AddPos(Up);
//            //}
//            break;
//        case 's':
//            MovePos = Down;
//            break;
//        default:
//            break;
//        }
//
//        if (false == _Sreen->IsScreenOut(GetPos() + MovePos))
//        {
//            AddPos(MovePos);
//        }
//
//    }
//
//protected:
//
//private:
//
//
//
//    int4 Pos;
//};
//
//// ���������� ���� �Լ��� ȣ��ǰ� �Լ��� �޸𸮸� �����
//// �޸𸮸� �����ϴ� ����ڸ� ���ؾ��ϴ� ��Ģ�� �ִµ�.
//// C++������ �װ� ���� �����ټ� �ִ� ������ �� �ִ°ž�.
//// �����Ϸ��� ���� ������ �Լ�ȣ��Ծ��� �˾Ƽ� �����ݴϴ�.
//void /*__cdecl*/ Function()
//{
//
//}
//
//int main()
//{
//    ConsoleScreen Screen;
//    Screen.Init('*');
//
//    Player MainPlayer;
//    // Ŭ�����ǰ�쿡�� 
//    MainPlayer.SetPos({ 10, 5 });
//
//    int Count = 0;
//
//    //Wall ArrWall[10];
//    //Wall* PtrWall = ArrWall;
//
//    while (true)
//    {
//        Screen.Clear();
//        Screen.SetPixel(MainPlayer.GetPos(), 'a');
//
//
//        for (size_t i = 0; i < 5; i++)
//        {
//
//            // int4 WallPos = PtrWall.GetPos();
//            // int4 WallPos = ArrWall[i].GetPos();
//            int4 WallPos = { 5 + Count, i };
//            Screen.SetPixel(WallPos, '0');
//        }
//        // ++Count;
//
//        Screen.Print();
//
//        if (0 != _kbhit())
//        {
//            MainPlayer.Input(&Screen);
//
//            // 1000�̸� 1���Դϴ�.
//        }
//        // 1�� ���� �����մϴ�.
//        Sleep(200);
//    }
//
//
//}
