#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string band_name;
    double weight;
    int kaluli;
};

int main()
{
    CandyBar snack;
    snack.band_name = "Mocha Munch";
    snack.weight = 2.3;
    snack.kaluli = 350;

    cout<<snack.band_name<<endl<<snack.weight<<endl<<snack.kaluli<<endl;
    return 0;

}
