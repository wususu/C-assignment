#include <iostream>
#include <string>

using namespace std;

class Golf
{
private:
    
    string fullname;
    int handicap;

public:

    Golf(string fname, int handicap)
    {
        this->fullname = fname;
        this->handicap = handicap;
    }

    void setgolf(string name, int hc)
    {
         *this = Golf(name, hc);
    }

    void print()
    {
        cout<<fullname<<" "<<handicap<<endl;
    }
};