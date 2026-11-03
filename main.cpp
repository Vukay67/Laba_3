#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main()
{
setlocale (LC_ALL, "Russian");
    int n, a, k = 0, t = 0, s = 0, d = 0;
    cout<<"Введите количество чисел: ";
    cin>>n;
    for (int i=1; i <= n; i++)
    {
        cout<<"Введите число: ";
        cin>>a;
        if (a % 2 != 0)
             k = k + 1;
        if (a % 3 == 0 && a % 5 != 0)
             t = t + 1;
        int root = sqrt(a);
        if (bool isNatural(int root)){
            if (root % 2 == 0)
                s = s + 1;
        }
        else 
        if ( (a / 2) % 2 != 0 )
        d = d + 1;


    }
    cout<<"количество нечетных чисел:"<<k<<endl;
    cout<<"количество чисел кратных 3 и не кратных 5:"<<t<<endl;
    cout<<"количество чисел являющихся квадратами четных чисел:"<<s<<endl;
    cout<<"количество чисел являющихся удвоенными нечетными числами:"<<d<<endl;



    return 0;
}