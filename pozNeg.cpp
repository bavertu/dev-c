#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Bir sayi giriniz: ";
    cin >> num;

    if (num > 0)
        cout << "Girilen sayi pozitiftir.";
    else if (num < 0)
        cout << "Girilen sayi negatiftir.";
    else
        cout << "Girilen sayi sifirdir.";

    return 0;
}

