#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

class Element abstract
{
	string name;
public:
	Element(string _name);
	void PrintCreate();
};

class Button :public Element
{
public:
	Button(string _name);
};

class CheckBox :public Element
{
public:
	CheckBox(string _name);
};

class RadioButton :public Element
{
public:
	RadioButton(string _name);
};



class MacButton :public Button
{
public:
	MacButton();
};

class MacCheckBox :public CheckBox
{
public:
	MacCheckBox();
};

class MacRadioButton :public RadioButton
{
public:
	MacRadioButton();
};



class WinButton :public Button
{
public:
	WinButton();
};

class WinCheckBox :public CheckBox
{
public:
	WinCheckBox();
};

class WinRadioButton :public RadioButton
{
public:
	WinRadioButton();
};



__interface GuiElFactory
{
public:
	virtual Button* createButton() = 0;
	virtual CheckBox* createCheckBox() = 0;
	virtual RadioButton* createRadioButton() = 0;
};



class WinGuiFactory : public GuiElFactory
{
public:
	Button* createButton();
	CheckBox* createCheckBox();
	RadioButton* createRadioButton();
};

class MacGuiFactory : public GuiElFactory
{
public:
	Button* createButton();
	CheckBox* createCheckBox();
	RadioButton* createRadioButton();
};



void useOS(GuiElFactory* OS);