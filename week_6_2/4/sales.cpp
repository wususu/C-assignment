#include <iostream>
#include "sales.h"

void SALES::setSales(Sales &s, const double ar[], int n)
{
    for(int i=0; i<QUARTERS; i++)
    {
        if(i<n)
        {
            s.sales[i] = ar[i];
        }
        else
        {
            s.sales[i] = 0.0;
        }
    }
    double max = ar[0], min = ar[0], sum=0.0;
    for(int i=0; i<QUARTERS; i++)
    {
        if(s.sales[i] < min)
        {
            min = s.sales[i];
        }
        if(s.sales[i] > max)
        {
            max = s.sales[i];
        }
        sum += s.sales[i];
    }
    s.average = sum/QUARTERS;
    s.max = max;
    s.min = min;
    return ;
}

void SALES::setSales(Sales &g)
{
    using namespace std;
    int n;
    double arr[QUARTERS]={0.0};
    cout<<"请输入物品数量（小于"<<QUARTERS<<")";
    cin>>n;
    cout<<"输入商品价格："<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    setSales(g, arr, n);
    return ;
}

void SALES::showSales(const Sales &g)
{
    using namespace std;
    for(int i=0; i<QUARTERS; i++)
    {
        cout<<g.sales[i]<<" ";        
    }
    cout<<endl<<"max: "<<g.max<<", min: "<<g.min<<"， average: "<<g.average<<endl;
    return ;
}