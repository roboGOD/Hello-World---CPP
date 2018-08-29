#include "newLib.h"
#include "classesLesson.h"

int main()
{
	Log("I AM BATMAN!!");
    int a = getInt("Enter first number");
    int b = getInt("Enter second number");
    Log(mul(a, b));
    
    // References
    int c = getInt("Enter another number");
    inc(c);
    PrintItAll(c);
    
    // Class Lesson
    Player p1;
    p1.x = 10;
    p1.y = 20;
    p1.speed = 2;
    p1.Display();
    
    p1.Move(2,-4);
    p1.Display();
    
	Wait;
}