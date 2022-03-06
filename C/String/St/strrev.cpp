#include <stdio.h>
#include <string.h>

void Delete(char a[])
{
    if (a[strlen(a) - 1] = '\n')
        a[strlen(a) - 1] = '\0';
}

/*
s="12345" ==> độ dài : 5
s[0] = '1';
s[1] = '2';
s[2] = '3';
s[3] = '4';
s[4] = '5';

strrev(s): s = "54321"
s[0] = '5';
s[1] = '4';
s[2] = '3';
s[3] = '2';
s[4] = '1';

s[0] = '1' sau khi đảo s[4] = '1'
s[1] = '2' sau khi đảo s[3] = '2'
s[2] = '3' sau khi đảo s[2] = '3'
s[3] = '4' sau khi đảo s[1] = '4'
s[4] = '5' sau khi đảo s[0] = '5'

==> độ dài : 5

Quy tắc: hoán vị 2 kí tự cho nhau:  s[i] hoán vị s[độ dài - i - 1]
VD: s[3] = 2  -> Sau khi hoán vị s[độ dài - i - 1] = s[5 - 3 - 1] = s[1]  => Hoán vị s[1] = 2
*/

void Reserve(char a[])
{
    size_t len = strlen(a);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }
}

int main()
{
    char a[50];
    printf("Press a: ");
    fgets(a, sizeof(a), stdin);
    Delete(a);

    // printf("Result: %s", a);
    // strrev(a);
    // printf("\nResult: %s", a);

    Reserve(a);
    printf("\nReverse: %s", a);
}