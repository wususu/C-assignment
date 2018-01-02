#include <iostream>
#include <string>

using namespace std;

class Move
{
private:
    double x;
    double y;
public:
    Move(double a=0, double b=0);
    void showmove() const;
    Move add(const Move &m) const;
    void reset(double a=0, double b=0);
};

Move::Move(double a, double b)
{
    this->x = a;
    this->y = b;
}

void Move::showmove() const{
    cout<<"x: "<<x<<" y:"<<y<<endl;
}

Move Move::add(const Move &m) const
{
    return Move(this->x+m.x, this->y+m.y);
}

void Move::reset(double a, double b)
{
    this->x = a;
    this->y = b;
}