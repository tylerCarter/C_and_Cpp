#include <iostream>

using namespace std;

int main()
{
    wcout.imbue(locale(".866"));

    wcout << L"русский текст\n";

    return EXIT_SUCCESS;
}