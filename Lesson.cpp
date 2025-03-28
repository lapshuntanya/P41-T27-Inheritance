#include "Lesson.h"
#define DEBUG

Lesson::Lesson(){
    theme = "C++";
    info = "Inheritance";
    home = "Create a base class.";
#ifdef DEBUG
    cout << "Lesson(): " << theme << endl;
#endif // DEDUG
}

Lesson::Lesson(string theme, string info, string home){
    this->theme = theme;
    this->info = info;
    this->home = home;
#ifdef DEBUG
    cout << "Lesson(t, i, h): " << theme << endl;
#endif // DEDUG
}

Lesson::~Lesson(){
#ifdef DEBUG
    cout << "~Lesson(): " << theme << endl;
#endif // DEDUG
}

void Lesson::setTheme(string theme)
{
}

void Lesson::setInfo(string info)
{
}

void Lesson::setHome(string home)
{
}

string Lesson::getTheme() const
{
    return string();
}

string Lesson::getInfo() const
{
    return string();
}

string Lesson::getHome() const
{
    return string();
}

void Lesson::showInfo() const
{
}
