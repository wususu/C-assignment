#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch[1000];
    int count_isalpha = 0;
    int count_noalpha = 0;
    int count_a = 0;
    int count_e = 0;
    int count_i = 0;
    int count_o = 0;
    int count_u = 0;
    while(true)
    {
        cin>>ch;
        if(ch[0] == 'q')
        {
            break;
        }
        if(isalpha(ch[0]))
        {
            count_isalpha++;
            switch(ch[0])
            {
                case 'a':
                    count_a++;
                    break;
                case 'e':
                    count_e++;
                    break;
                case 'i':
                    count_i++;
                    break;
                case 'o':
                    count_o++;
                    break;
                case 'u':
                    count_u++;
                    break;
                default:
                    break;
            }
        }
        else
        {
            count_noalpha++;
        }
    }
    cout<<count_isalpha<<" words beginning with vowels"<<endl;
    cout<<count_noalpha<<" words beginning with consonants"<<endl;
    cout<<count_a<<" words beginning with a"<<endl;
    cout<<count_e<<" words beginning with e"<<endl;
    cout<<count_i<<" words beginning with i"<<endl;
    cout<<count_o<<" words beginning with o"<<endl;
    cout<<count_u<<" words beginning with u"<<endl;

    return 0;
}