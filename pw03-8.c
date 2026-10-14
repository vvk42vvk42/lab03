#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    char str_utf8[] = "Сбой матрицы";
    wchar_t str_wide[] = L"Сбой матрицы";

    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(str_utf8), strlen(str_utf8));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(str_wide), wcslen(str_wide));

    return 0;
}
