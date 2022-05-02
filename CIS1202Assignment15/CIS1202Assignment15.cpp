/*
Kacey Hall
CIS 1202
5/2/2022
*/

#include <iostream>

using namespace std;

void Validate(char c)
{
    string invalidCharacterExcpeption = "Error: must enter a letter.";

    if (c >= 'A' && c <= 'Z' || c >= 97 && c <= 122)
    {
        return;
    }
    else
    {
        throw invalidCharacterExcpeption;
    }   
}

void ValidateOffset(char start, int offset)
{
    char newC = start + offset;

    string invalidRangeException = "Offset was out of bounds.";

    if (start >= 'a' && start <= 'z' && newC < 'a' || newC > 'z')
    {
        throw invalidRangeException;
    }
}

char character(char start, int offset)
{
    char newC;
    string invalidRangeException = "Offset was out of bounds.";

    newC = start + offset;

    if (start >= 'a' && start <= 'z')
    {
        ValidateOffset(start, offset);
    }
    else if (start >= 'A' && start <= 'Z' && newC < 'A' || newC > 'Z')
    {
        throw invalidRangeException;
    }

    return newC;
}

int main()
{
    char x;
    int y;
    bool again = true;

    while (again)
    {
        try
        {
            cout << "Pass a character: " << endl;
            cin >> x;
            cin.ignore();

            Validate(x);

            cout << "Pass the offset: " << endl;
            cin >> y;
            cin.ignore();

            try
            {
                cout << character(x, y) << endl;
            }
            catch (string invalidRangeException)
            {
                cout << invalidRangeException << endl;
            }
        }
        catch (string notALetter)
        {
            cout << notALetter << endl;
        }         
        
        cout << "Enter more? (1 for more, 0 if finished.)" << endl;
        cin >> again;
        cin.ignore();
    }
}