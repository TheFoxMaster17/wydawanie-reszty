#include <iostream>
using namespace std;

int main()
{
    int money;
    int nominaly[9];
    nominaly[0] = 500;
    nominaly[1] = 200;
    nominaly[2] = 100;
    nominaly[3] = 50;
    nominaly[4] = 20;
    nominaly[5] = 10;
    nominaly[6] = 5;
    nominaly[7] = 2;
    nominaly[8] = 1;
    int i = 0;
    int f = 0;

    cout << "Wpisz ile mam wyplacic: ";
    cin >> money;
    while (money >= 0)
    {
        if (money >= nominaly[i])
        {
            money = money - nominaly[i];
            f++;
        }
        else
        {
            if (f > 0)
            {
                cout << nominaly[i] << " x " << f << endl;
            }
            i++;
            f = 0;
        }
    }
    return 0;
}