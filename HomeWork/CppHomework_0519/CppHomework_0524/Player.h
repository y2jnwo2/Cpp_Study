#pragma once


int StringCount(const char* _Arr)
{
	// ���� �����ڵ带 �����ϼ���
	int ChCount = 0;
	while (_Arr[ChCount])
	{
		++ChCount;
	}

	return ChCount;
}
class Player
{
public:
	void StatusRender()
	{
		int Count = 0;

		Count = StringCount(Name);

		// 40���� ���������.

		// �ٹٲ��� �ȵǰ� �ֽ��ϴ�.
		printf_s("%s", Name);

		for (size_t i = 0; i < LineCount - Count; i++)
		{
			printf_s("-");
		}
		printf_s("\n");

		printf_s("���ݷ� : %d\n", Att);
		printf_s("ü  �� : %d\n", Hp);
		for (size_t i = 0; i < LineCount; i++)
		{
			printf_s("-");
		}
		printf_s("\n");

	}

	void DamagePrint(const char* const _AttName, int _Att)
	{
		printf_s("%s�� %s�� �����߽��ϴ�.\n", _AttName, Name);
		printf_s("%s�� %d�� �������� �Ծ����ϴ�.\n", Name, _Att);
	}

	void Damage(int _Att)
	{
		Hp -= _Att;
	}

	// 
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
	char Name[40] = "Player";
	int Att = 10;
	int Hp = 100;
};

