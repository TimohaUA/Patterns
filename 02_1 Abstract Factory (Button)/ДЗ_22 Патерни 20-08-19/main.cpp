#include "Header.h"

int main()
{
	ifstream in("OS.txt");
	if (in.is_open())
	{
		string temp;
		in >> temp;
		if (temp == "windows")
		{
			WinGuiFactory* win = new WinGuiFactory();
			useOS(win);
		}
		else if (temp == "mac")
		{
			MacGuiFactory* mac = new MacGuiFactory();
			useOS(mac);
		}
		else
		{
			cout << "ERROR OS type!!!\n";
		}
	}
	in.close();



	system("pause");
}