#include <iostream>

using namespace std;

int main()
{
    wcout.imbue(locale(".866"));

    wcout << L"������� �����\n";

    return EXIT_SUCCESS;
}