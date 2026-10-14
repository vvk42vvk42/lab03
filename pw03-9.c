#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    wchar_t nickname[50];

    wscanf(L"%ls", nickname);
    wprintf(L"Агент %ls авторизован в системе\n", nickname);

    return 0;
}
