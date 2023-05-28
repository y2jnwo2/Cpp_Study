#pragma once
#include "int4.h"

class int4;
class Globalvalue;
class ConsoleScreen
{
public:
    

    void Init(char _BaseCh);
   

    void SetPixel(const int4& _Pos, char _Ch);
    

    void Clear();
    

    bool IsScreenOut(const int4& _Pos) const;
   


    void Print() const;
    

protected:


private:
    char BaseCh = ' ';
    char ArrScreen[10][21] = {};
};

