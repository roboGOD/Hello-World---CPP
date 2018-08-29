class Entity
{
public:
    int x, y;
    int speed;
    
    void Move(int xa, int ya);
    void Display();
};

class Player : public Entity
{
public:
    const char * name;
    
    void Display();
};