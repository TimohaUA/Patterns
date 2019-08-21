#include "Header.h"

Element::Element(string _name)
{
	this->name = _name;
}

void Element::PrintCreate()
{
	cout << name << " was created!\n";
}

Button::Button(string _name) :Element(_name + " Button")
{
}

CheckBox::CheckBox(string _name) : Element(_name + " CheckBox")
{
}

RadioButton::RadioButton(string _name) : Element(_name + " RadioButton")
{
}

MacButton::MacButton() : Button("MacOS")
{
}

MacCheckBox::MacCheckBox() : CheckBox("MacOS")
{
}

MacRadioButton::MacRadioButton() : RadioButton("MacOS")
{
}

WinButton::WinButton() : Button("Windows")
{
}

WinCheckBox::WinCheckBox() : CheckBox("Windows")
{
}

WinRadioButton::WinRadioButton() : RadioButton("Windows")
{
}

Button * WinGuiFactory::createButton()
{
	return new WinButton();
}

CheckBox * WinGuiFactory::createCheckBox()
{
	return new WinCheckBox();
}

RadioButton * WinGuiFactory::createRadioButton()
{
	return new WinRadioButton();
}

Button * MacGuiFactory::createButton()
{
	return new MacButton();
}

CheckBox * MacGuiFactory::createCheckBox()
{
	return new MacCheckBox();
}

RadioButton * MacGuiFactory::createRadioButton()
{
	return new MacRadioButton();
}

void useOS(GuiElFactory * OS)
{
	Button* button = OS->createButton();
	CheckBox* check_box = OS->createCheckBox();
	RadioButton* radio_batton = OS->createRadioButton();
	button->PrintCreate();
	check_box->PrintCreate();
	radio_batton->PrintCreate();
}
