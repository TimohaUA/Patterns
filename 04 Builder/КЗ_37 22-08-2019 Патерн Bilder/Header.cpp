#include "Header.h"

Notebook::Notebook(string _Name)
{
	this->Name = _Name;
}

string Notebook::getPart(const string & key)
{
	return param[key];
}

void Notebook::setPart(string key, string value)
{
	param[key] = value;
}

void Notebook::Show()
{
	for (auto el : param)
		cout << el.first << " " << el.second << endl;
}

bool Notebook::checkPart(string key)
{
	return param.find(key)!=param.end();
}



GamerNotebookBuilder::GamerNotebookBuilder()
{
	device = new Notebook("Gamer Notebook");
}

void GamerNotebookBuilder::setMemory()
{
	device->setPart("Memory", "32 GB");
}

void GamerNotebookBuilder::setHDD()
{
	device->setPart("HDD", "2 TB");
}

void GamerNotebookBuilder::setMatrix()
{
	device->setPart("Matrix", "2048x1600");
}

void GamerNotebookBuilder::setProcessor()
{
	device->setPart("Processor", "Intel I7");
}

HomeNotebookBuilder::HomeNotebookBuilder()
{
	device = new Notebook("Home Notebook");
}

void HomeNotebookBuilder::setMemory()
{
	device->setPart("Memory", "8 GB");
	
}

void HomeNotebookBuilder::setHDD()
{
	device->setPart("HDD", "1 TB");
}

void HomeNotebookBuilder::setMatrix()
{
	device->setPart("Matrix", "1024x768");
}

void HomeNotebookBuilder::setProcessor()
{
	device->setPart("Processor", "Intel I5");
}

CustomNotebookBuilder::CustomNotebookBuilder()
{
	device = new Notebook("Custom Notebook");
}

void CustomNotebookBuilder::setMemory()
{
	string _Value;
	cout << "Встановiть параметри памятi (DDR4 ____): ";
	cin >> _Value;
	device->setPart("Memory", _Value);
	
}

void CustomNotebookBuilder::setHDD()
{
	string _Value;
	cout << "Встановiть параметри вiнчестера (HDD ___): ";
	cin >> _Value;
	device->setPart("HDD", _Value);
	
}

void CustomNotebookBuilder::setMatrix()
{
	string _Value;
	cout << "Встановiть параметри матрицi: ";
	cin >> _Value;
	
	device->setPart("Matrix", _Value);
	
}

void CustomNotebookBuilder::setProcessor()
{
	string _Value;
	cout << "Встановiть тип процесора: ";
	cin >> _Value;
	
	device->setPart("Processor", _Value);
}

void NotebookShop::createNotebook(NotebookBuilder * obj)
{
	obj->setMemory();
	obj->setHDD();
	obj->setMatrix();
	obj->setProcessor();

}

Notebook * NotebookBuilder::getDevice()
{
	return device;
}
