#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream in;
    char c;
    int count=0;
    in.open("worlds.txt");
    while(!in.eof())
    {
        in>>c;
        cout<<c<<endl;
        count++;
    }
    cout<<"文件包含"<<count<<"个字符"<<endl;
    return 0;
}