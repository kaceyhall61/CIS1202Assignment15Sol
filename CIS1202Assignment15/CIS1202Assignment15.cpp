/*
Kacey Hall
CIS 1202
5/2/2022
*/

#include <iostream>

using namespace std;

char character(char start, int offset)
{
    char newC;

    newC = start + offset;


    return newC;
}

int main()
{
    char x;
    int y;

    cout << "Pass a character: " << endl;
    cin >> x;
    cin.ignore();

    cout << "Pass the offset: " << endl;
    cin >> y;
    cin.ignore();

    cout << character(x, y) << endl;
}