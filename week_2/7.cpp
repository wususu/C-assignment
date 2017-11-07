#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string company_name;
    double diameter;
    double weight;
};

int main()
{
    int n;

    cout<<"记录的批萨个数:";
    cin>>n;

    Pizza pizza[n];

    for(int i=0;i<n;i++)
    {
        cout<<"第"<<i+1<<"个批萨信息"<<endl;
        cout<<"公司:";
        cin>>pizza[i].company_name;
        cout<<"直径";
        cin>>pizza[i].diameter;
        cout<<"重量";
        cin>>pizza[i].weight;
    }
    for(int i=0;i<n;i++)
    {
        cout<<pizza[i].company_name<<endl<<pizza[i].diameter<<endl<<pizza[i].weight<<endl;
    }

    return 0;
}
