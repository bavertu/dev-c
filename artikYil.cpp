//Hacý Baver Tutumlu, 22493276, TBY110-11

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Bir sene giriniz: ";
    cin >> num;

    if (num % 4 == 0)
        cout << "Artik yildir.";
     else
        cout << "Artik yil degildir.";

    return 0;
}

