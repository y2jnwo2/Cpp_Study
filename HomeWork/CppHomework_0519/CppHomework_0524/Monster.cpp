
class Player;

class Monster
{
	// c++������ �Լ����� �װ� ���� ���α׷����� �ǵ��� �ο��Ҽ��� �ֽ��ϴ�.

public:
	//void LvUp() 
	//{
	//	Att += 10;
	//}

	void StatusRender()
	{


	}

	void DamagePrint(const char* const _AttName, int _Att)
	{

	}

	void Damage(int _Att)
	{
		Hp -= _Att;
	}

	const char* GetName()
	{
		return Name;
	}

	int GetAtt()
	{
		return Att;
	}

	bool IsDeath()
	{
		return Hp <= 0;
	}

private:
	// ĸ��ȭ
	char Name[40] = "Monster";
	int Att = 10;
	int Hp = 100;
};