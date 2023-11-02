#include <iostream>
#include <time.h>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    setlocale(LC_ALL, "RU");
    setlocale(LC_ALL, ".UTF8");
    float x, y;
    cout << "Введите x: ";
    cin >> x;
    if (x <= -3)
    {
        y = 1;
    }
    else if (x > -3 && x <= -1)
    {

        y = -sqrt(4 - pow(x + 1, 2));
    }
    else if (x > -1 && x <= 2)
    {

        y = -2;
    }
    else if (x > 2)
    {

        y = x - 4;
    }

    cout << "y = " << y;

    return 0;
}
// 123
