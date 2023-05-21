// HomeWork0519.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//int ChCount = 0;
//while (_string[ChCount])
//{
//    ++ChCount;
//}

int ChCount(const char* const _string, char Ch)
{
    int num = 0;

    if (nullptr == _string)
    {
        return -1;
    }

    int ChCount = 0;
    while (_string[ChCount])
    {

        for (int i = 0; i < _string[ChCount]; i++)
        {
            char Char = _string[ChCount];

            if (Char == Ch)
            {
                num++;
            }
            ++ChCount;
        }

    }

    return num;
    int Count = 0;

    // for문을 돌리는건 당연한거야.

    // Ch와 같은 문자가 몇개들어있는지 세어서 리턴해주는 함수
    return 0;
}

void TrimDelete(char* _string)
{
    
    int num = 0;

    if (nullptr == _string)
    {
        return ;
    }

    int ChCount = 0;
    char* Char = &_string[ChCount];

    for (ChCount = 0; _string[ChCount] != 0; ChCount++)
    {

        if (*Char != ' ')
        {
            *Char = Char[ChCount+1];

        }
    }

    return;
}


int DigitsCount(int _Number)
{
    int count = 0;

    while (_Number != 0)
    {
        _Number /= 10;
        ++count;
    }
    return count;
}

void StrCopy(const char* const _Left, char* _Right)
{
    return;
}

// 가장 어려운 숙제
void NumberToString(int _Number, char* _Right)
{
    return;
}


int main()
{
    //// 4가 리턴되어야 합니다.
    //// 문자열의 마지막에 들어가는 0은 글자로 치지 않습니다.
    //{
    //    int Result = ChCount("ab aaa ccc ddd eee", 'w');

    //    int Result2 = ChCount(nullptr, 'w');
    //}

    //{
    //    char Arr[256] = "aa  b  c dd ee";

    //    TrimDelete(Arr);

    //    // Arr "aabcddee"
    //    int a = 0;
    //}

    {
        // 8이 리턴되게 만들어라.
        int Result = DigitsCount(6915123);

        int a = 0;
    }

    //{
    //    char ArrCopyText[256] = {};

    //    StrCopy("aaaa bbb ccc", ArrCopyText);

    //    int a = 0;
    //}

    //{
    //    char Result[256] = {};

    //    // Result = "312312";

    //    NumberToString(312312, Result);

    //    char Ch = '0';

    //    int Value = 7;

    //    char ChConvert = Value + 48;

    //    int a = 0;
    //}

    //std::cout << "Hello World!\n";
}
