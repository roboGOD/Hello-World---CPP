#include <iostream>

class Entity
{
public:
    int x, y;
    int speed;
    
    void Move(int xa, int ya);
    
    void Display();
    
    virtual std::string GetName() {return "Entity";}
};

class Player : public Entity
{
private:
    std::string m_name;
public:
    const char * name;
public:
    Player(const std::string& name)
        : m_name(name) {}
    
    std::string GetName() override {return m_name;}
    
    void Display();
};

void PrintName(Entity* e);