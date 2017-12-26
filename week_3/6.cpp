#include <string>
#include <iostream>

using namespace std;

struct Account
{
    string name;
    double num;
};

int main()
{
    int n;
    cout<<"请输入捐款者数目： "<<endl;
    cin>>n;
    int flag[n];
    Account bb[n];
    bool isNone = true;

    cout<<"请输入捐款者姓名和捐款金额： "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>bb[i].name;
        cin>>bb[i].num;
        if(bb[i].num > 10000)
        {
            isNone = false;
            flag[i] = 1;
        }
        else
        {
            flag[i] = 0;
        }
    }

    if(isNone)
    {
        cout<<"无重要捐款人"<<endl;
    }
    else
    {
            cout<<"重要捐款人： "<<endl;
        for(int i=0;i<n;i++)
        {
            if(flag[i] == 1)
            {
                cout<<bb[i].name<<"  "<<bb[i].num<<endl;
            }
        }
    }
    cout<<"其他捐款人： "<<endl;
    for(int i=0;i<n;i++)
    {
        if(flag[i] == 0)
        {
            cout<<bb[i].name<<"  "<<bb[i].num<<endl;
        }
    }
    return 0;
}