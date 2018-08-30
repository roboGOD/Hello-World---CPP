#include "newLib.h"
#include "classesLesson.h"

int globalVariable = 29;
//static int staticVariable = 20;

int main()
{
    /*
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
    p1.name = "roboGOD";
    p1.Display();
    
    p1.Move(2,-4);
    p1.Display();

    
    // Static and Extern
    Log("#########################");
    Log("Extern Variable:");
    PrintItAll(globalVariable);
    Log("Static Variable:");
    PrintItAll(staticVariable);
    */
    
    
    // Virtual Functions
    Entity* e = new Entity();
    PrintName(e);
    
    Player* p = new Player("roboGOD");
    PrintName(p);
    
	Wait;
}