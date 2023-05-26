#pragma once
#include "int4.h"
#include "ConsoleScreen.h"

class ConsoleScreen;
class Player
{
public:
    // ���۷����� �⺻������ 8����Ʈ �����Դϴ�.
    // int4�� �׳� 16����Ʈ�Դϴ�.
    // int4&�� �׳� 8����Ʈ�Դϴ�.
    // int4*�� �׳� 8����Ʈ�Դϴ�.

    // ���� �������� ���ڰ� ���ļ� 8����Ʈ�� �Ѿ��
    // �װ� ����ü�� Ŭ������ ��� �������·� �ѱ�°� ��κ��� ��Ȳ����
    // ������ �̵��̴�.

    int4 GetPos() const;
    

    void AddPos(const int4& _Pos);
   


    void SetPos(const int4& _Pos);
    

    // �����ڿ��� ���ϼ��� ����.
    Player()
        : Pos()
    {
    }

    Player(const Player&) = delete;

    void Input(ConsoleScreen* _Sreen);
    

    

protected:

private:



    int4 Pos;
};