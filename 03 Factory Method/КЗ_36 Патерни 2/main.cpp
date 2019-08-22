#include "Header.h"

int main()
{
	setlocale(LC_ALL, "RUS");


	// ��� �������
	/*vector<Unit*>team;

	while (true)
	{
		// �������� ����, ������� ������, push � team;
		int menu;
		for (auto el : team)	//���� ���� � �������� � ������
			el->play();
		cout << "\n����:\n";
		cout << "1) Archer.\n";
		cout << "2) Mag.\n";
		cout << "3) Swardsman.\n";
		cin >> menu;
		if (menu == 1)
			team.push_back(new Archer());
		else if(menu==2)
			team.push_back(new Mag());
		else if (menu == 3)
			team.push_back(new Swardsman());
		system("cls");
	}*/





	// � ��������

	FactoryMethodArvher factoryA;
	FactoryMethodMag factoryM;
	FactoryMethodSwardsman factoryS;

	FactoryMethod *factory[] = { &factoryA, &factoryM, &factoryS };

	vector<Unit*>team;
	Unit* Player;
	bool a = true;
	while (a)
	{
		// �������� ����, ������� ������, push � team;
		int player;
		for (auto el : team)	//���� ���� � �������� � ������
			el->play();
		cout << "\n����:\n";
		cout << "1) Archer.\n";
		cout << "2) Mag.\n";
		cout << "3) Swardsman.\n";
		cin >> player;
		switch (player)
		{
		case 0:
		{
			a = false;
			break;
		}
		case ARCHER:
		case MAG:
		case SWARDSMAN:
			Player = factory[player - 1]->createPlayer();
			team.push_back(Player);
			break;
		default:
			break;
		}
		system("cls");

	}
	cout << "The End!!!\n\n";

	system("pause");
}