#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstring>

using namespace std;

int FindFourthDotIterative(char* str) {
    int dotCount = 0;
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        if (str[i] == '.') {
            dotCount++;
            if (dotCount == 4) {
                return i;
            }
        }
    }

    return -1;
}

char* Change(char* str)
{
    int len = strlen(str);

    char* tmp = new char[len * 2 + 1];
    char* t = tmp;
    tmp[0] = '\0';

    for (int i = 0; i < len; i++) {
        if (str[i] == '.') {
            strcat(t, "**");
            t += 2;
        }
        else {
            *t++ = str[i];
            *t = '\0';
        }
    }

    return tmp;
}



int main()
{
    char str[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "i: " << FindFourthDotIterative(str) << endl;

    char* dest = Change(str);

    cout << "Modified string: " << dest << endl;

    delete[] dest; 

    return 0;
}
