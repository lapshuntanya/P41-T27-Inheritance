#include "PaidLesson.h"
#define DEBUG

PaidLesson::PaidLesson()
{
    //Lesson() => C++, Inharitance, Create a base class
    price = 0;
#ifdef DEBUG
    cout << "PaidLesson(): " << theme << endl;
#endif // DEDUG
}

PaidLesson::PaidLesson(string theme, string info, string home, float price)
    :Lesson(theme, info, home)
{
    //Lesson() => C++, Inheritance, Create a base class
    //this->theme = theme;
    this->price = price;
#ifdef DEBUG
    cout << "PaidLesson(t, i, h, p): " << theme << endl;
#endif // DEDUG
}

PaidLesson::~PaidLesson()
{
#ifdef DEBUG
    cout << "~PaidLesson(): " << theme << endl;
#endif // DEDUG
}

void PaidLesson::setPrice(float price){ this->price = price; }
float PaidLesson::getPrice() const{    return price;}

void PaidLesson::showInfo() const
{
    Lesson::showInfo(); //theme, info, home
    cout << "Price: " << price << "UAH.\n";
}
