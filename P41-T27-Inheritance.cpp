#include "Lesson.h"
#include "PaidLesson.h"

int main()
{
	Lesson a;
	Lesson b("JS", "DOM-model", "Create a gallery");

	a.showInfo();
	b.showInfo();
	cout << "==========================================\n";
	PaidLesson c;
	PaidLesson d("C#", "Loops", "while, for", 200.99);

	c.showInfo();
	d.showInfo();

	cout << "==========================================\n";

}

