#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char array[5];

    cout << "    array = " << static_cast<void*>(array) << "\n"
        << "&array[0] = " << static_cast<void*>(&array[0]) << "\n"
        << "   &array = " << static_cast<void*>(&array) << endl;

    system("pause");
    return 0;
}