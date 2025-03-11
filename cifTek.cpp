#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Bir sayi giriniz: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Girilen sayi cifttir.";
    else
        cout << "Girilen sayi tektir.";

    return 0;
}

