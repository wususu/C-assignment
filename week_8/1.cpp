#include <iostream>
#include <string>

using namespace std;

class Count
{
    private:
        string name;
        string count_number;
        int money;

    public:
        Count();
        Count(string name, string count_number,int money);
        static Count* newInstance(string name, string count_number, int money);
        void print();
        bool add_money(int money);
        bool get_money(int money);
    };
    

Count::Count()
{

}

Count::Count(const string name,const string count_number,const int money)
{
    this->name = name;
    this->count_number = count_number;
    this->money = money;
}    

Count* Count::newInstance(string name, string count_number, int money)
{
    return new Count(name, count_number, money);
}

void Count::print()
{
    cout<<"name: "<<name<<endl;
    cout<<"count number: "<<count_number<<endl;
    cout<<"money: "<<money<<endl; 
}

bool Count::get_money(int money)
{
    if(this->money >= money)
    {
        this->money -= money;
        return true;
    }
    return false;
}

bool Count::add_money(int money)
{
    this->money += money;
    return true;
}