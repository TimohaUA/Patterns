#include "Header.h"

int main()
{
	setlocale(LC_ALL, "RUS");

	NotebookShop* shop = new NotebookShop();

	NotebookBuilder* builder = new GamerNotebookBuilder();
	shop->createNotebook(builder);
	builder->getDevice()->Show();
	cout <<"\n*************************************\n";
	NotebookBuilder* builder1 = new CustomNotebookBuilder();
	shop->createNotebook(builder1);
	cout << endl;
	builder1->getDevice()->Show();

	delete shop, builder, builder1;
	system("pause");
}