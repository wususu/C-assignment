#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"跑步次数:";
    cin>>n;
    double scores[n];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cout<<"第"<<i+1<<"次跑的成绩:";
        cin>>scores[i];
        sum += scores[i];
    }

    cout<<"跑步次数: "<<n<<endl<<"平均成绩: "<<sum/n<<endl;
    return 0;
}
