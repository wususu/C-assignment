#include <iostream>
#include <string>

using namespace std;

class Betelege
{
private:
    string name;
    int cli;
public:
    Betelege(string name="Plorga",int cli=50){this->name=name; this->cli=cli;};
    void setCli(int cli);
    void show();
};

void Betelege::setCli(int cli)
{
    this->cli = cli;
}

void Betelege::show()
{
    cout<<"name: "<<name<<" cli:"<<cli<<endl;
}