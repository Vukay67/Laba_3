#include <iostream>
#include <clocale>
using namespace std;

int main()
{
setlocale (LC_ALL, "Russian");
    int n, a, k = 0, t = 0, d = 0, s = 0, fsum = 0, sum = 0, fs = 0;
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
        if ( (a / 2) % 2 != 0 )
            d = d + 1;


        if (a % 7 == 1 || a % 7 == 2 || a % 7 == 5)
            s = s + 1;
        if (a % 5 == 0)
            fsum = fsum + a;
        if (a % 5 == 0 && a % 7 != 0){
            fs = fs + 1;
            sum = sum + a;
        }
    }
    cout<<"количество нечетных чисел: "<<k<<endl;
    cout<<"количество чисел кратных 3 и не кратных 5: "<<t<<endl;
    cout<<"количество чисел являющихся удвоенными нечетными числами: "<<d<<endl;
    cout<<"количество чисел при делении на 7 дают остаток 1, 2 или 5: "<<s<<endl;
    cout<<"сумма чисел кратных 5: "<<fsum<<endl;
    cout<<"количество чисел: "<<fs<<endl<<"сумма: "<<sum<<endl;




    return 0;
}