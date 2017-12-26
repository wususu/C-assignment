#include <iostream>
#include "sales.h"

using namespace SALES;



int main()
{
    Sales sales1;
    Sales sales2;

    double dd[4] = {2.2, 3.3, 4.4, 5.5};
    setSales(sales1, dd, 4);
    setSales(sales2);
    showSales(sales1);
    showSales(sales2);
    return 0;
}