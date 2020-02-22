
#include <iostream>
using namespace std;

int main()
{
    int mas[5];
    int size = 5;
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        mas[i] = rand();
        cout << mas[i] << "\t";
    }
    for (int a = 1; a < size; a++)
    {
        for (int b=size-1; b >= a; b--)
        {
            if (mas[b - 1] > mas[b])
            {
                k = mas[b - 1];
                mas[b - 1] = mas[b];
                mas[b] = k;
            }
     }
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << mas[i] << "\t";
    }



}
