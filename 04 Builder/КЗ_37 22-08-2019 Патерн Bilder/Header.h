#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <map>

using namespace std;


class Notebook
{
	string Name;
	map<string, string>param;
public:
	Notebook(string _Name);
	string getPart(const string& key);
	void setPart(string key,string value);
	void Show();
	bool checkPart(string key);

	~Notebook() {};
};


class NotebookBuilder abstract
{
protected:
	Notebook* device;
public:
	virtual void setMemory()=0;
	virtual void setHDD()=0;
	virtual void setMatrix()=0;
	virtual void setProcessor()=0;
	Notebook* getDevice();
	virtual ~NotebookBuilder() {};
};



class GamerNotebookBuilder: public NotebookBuilder
{
public:
	GamerNotebookBuilder();
	void setMemory();
	void setHDD();
	void setMatrix();
	void setProcessor();
	virtual ~GamerNotebookBuilder() {};
};



class HomeNotebookBuilder : public NotebookBuilder
{
public:
	HomeNotebookBuilder();
	void setMemory();
	void setHDD();
	void setMatrix();
	void setProcessor();
	virtual ~HomeNotebookBuilder() {};
};


class CustomNotebookBuilder: public NotebookBuilder
{
public:
	CustomNotebookBuilder();
	void setMemory();
	void setHDD();
	void setMatrix();
	void setProcessor();
	virtual ~CustomNotebookBuilder() {};
};



class NotebookShop
{
public:
	void createNotebook(NotebookBuilder* obj);

};
