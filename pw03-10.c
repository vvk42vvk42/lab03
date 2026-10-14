#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    wchar_t mod1[30];
    wchar_t mod2[30];
    wchar_t mod3[30];

    wscanf(L"%ls %ls %ls", mod1, mod2, mod3);

    wprintf(L"%-15ls|%20ls|%.5ls\n", mod1, mod2, mod3);

    return 0;
}
