#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class Person
{

private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person(){lname=""; fname[0]='\0';}
    Person(const string & ln, const char *fn = "Heyyou");
    void show() const;
    void FormalShow() const;

};

Person::Person(const string &ln, const char *fn){
    this->lname = ln;
    strcpy(this->fname, fn);
};

void Person::show() const{
    cout<<fname<<" "<<lname<<endl;    
};

void Person::FormalShow() const{
    cout<<lname<<" "<<fname<<endl;    
}

int main()
{
    Person one;
    Person two("janke", "wu");
    Person three("noo");
    one.show();
    one.FormalShow();
    two.show();
    two.FormalShow();
    three.show();
    three.FormalShow();
    return 0;
}