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

void Lesson::setTheme(string theme){ this->theme = theme; }
void Lesson::setInfo(string info){ this->info = info; }
void Lesson::setHome(string home){ this->home = home; }

string Lesson::getTheme() const{    return theme;}
string Lesson::getInfo() const{    return info;}
string Lesson::getHome() const{    return home;}

void Lesson::showInfo() const{
    cout << endl;
    cout << "Theme: " << theme << endl;
    cout << "Info:  " << info << endl;
    cout << "HW:    " << home << endl;
}
