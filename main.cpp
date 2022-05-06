#include "Student.h"
#include <iostream>

int main()
{
    Student s;

    Student sArr[5];
    for (int i = 0; i < 2; i++)
    {
        cin >> sArr[i];
        cout << "============" << endl;;
    }
    
    for (int i = 0; i < 2; i++)
    {
        cout << sArr[i] << endl;
        cout << "============" << endl;
    }
}
