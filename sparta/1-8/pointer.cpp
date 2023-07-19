// pointer.cpp
#include <iostream>

using namespace std;

int main()
{
    int watermelons = 10;
    int *p_watermelonBox = &watermelons;

    cout << "watermelons: " << watermelons << endl;
    cout << "watermelons in p_watermelonBox: " << *p_watermelonBox << endl;

    cout << "watermelons location: " << &watermelons << endl;
    cout << "p_watermelonBox value: " << p_watermelonBox << endl;

    *p_watermelonBox = *p_watermelonBox + 1;
    cout << "Now I hava " << watermelons << endl;
}