// HomeWork0518.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//int ChCount = 0;
//while (Arr[ChCount])
//{
//    char PrintCh = Arr[ChCount];
//    putchar(PrintCh);
//    ++ChCount;
//}
//하하하
// ㄻㄴㅇㄻㄴㅇㄻㅇㄴ

int StringCount(char* _Arr)
{
    if (_Arr == nullptr)
    {
        return -1;
    }

    int count = 0;
    char strCount = _Arr[count];

    while (_Arr[count])
    {
            putchar(strCount);
            count++;
    }

    return count;
}

void ChangeCh(char* _Arr, char _PrevCh, char _NextCh)
{
    // 1. 들어온 글자를 전부 '1'로 채워봐라.
    //  1-1. 함수 내부에서 하지 말고
    // for while도 생각하지 말고
    
    if (_Arr == nullptr)
    {
        return ;
    }

    int count = 0;

    while (_Arr[count])
    {
        char changeChar = _Arr[count];

        if (changeChar == _PrevCh)
        {
            _PrevCh = _NextCh;
        }
        count++;
    }
    return;

    
}

int main()
{
    //// 한글 들어가지 않습니다.
    //{
    //    char Arr[100] = "aa";
    //    // 5이 나와야 합니다.
    //    // 글자수를 세는 함수입니다.
    //    int Result = StringCount(Arr);

    //    printf_s("값은 %d", Result);

    //    int a = 0;
    //}


	{
	    char Arr[100] = "aaa bbb ccc";

	    //Arr[0] = '1';

	    // Arr[100] = "1111111111111";

	    // 3이 나와야 합니다.
	    // "aaa bbb ccc"; => "aaa bbb ddd";
	    ChangeCh(Arr, 'c', 'd');

	    int a = 0;
	}


}
