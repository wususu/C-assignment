#include <iostream>
#include <string.h>

struct chaff
{
    char dross[20];
    int slag;
};

const int N = 3;
chaff buffer[N];

int main()
{
    using namespace std;
    chaff arr[N];
    chaff * buffer_a = new (buffer) chaff[N];

    for(int i=0; i< N; i++)
    {
        strcpy(buffer_a[i].dross, "janke");
        buffer_a[i].slag = 2;
    }

    for(int i=0; i<N; i++)
    {
        cout << "chaff[" << i << "]" << endl;
        cout << "dross: " << buffer_a[i].dross << endl;
        cout << "slag: " << buffer_a[i].slag << endl;
    }
    return 0;
}