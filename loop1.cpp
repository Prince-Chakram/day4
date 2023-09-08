// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         cout<<"A ";
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<3;i++)
    {
        cout<<endl<<"outer loop"<<i<<endl<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<"inner loop"<<j<<endl;
        }
    }
}