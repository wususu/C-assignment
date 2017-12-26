#include <iostream>
#include <string.h>
#include "golf.h"


void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    using namespace std;
    char ch[1000];
    int hc;
    cout<<"请输入姓名：";
    cin>>ch;
    cout<<"请输入等级： ";
    cin>>hc;
    setgolf(g, ch, hc);
    return 1;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    using namespace std;

    cout<<g.fullname<<"——"<<g.handicap<<endl;
}

