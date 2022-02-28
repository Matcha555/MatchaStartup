#include <stdio.h>
#include <string.h>

void Copy(char b[], char a[])
{
    //Đầu tiên duyệt từ đầu chuỗi a đến cuối chuỗi để bỏ hết sang chuỗi b
    for (int i = 0; i < strlen(a); i++)
    {
        b[i] = a[i]; // Copy lần lượt giá trị chuỗi a sang chuỗi b
    }
    b[strlen(a)] = '\0'; // Kết thúc chuoi b bằng ký tự \0.
}

int main()
{
    char a[50] = "Doan Trieu Dieu Anh";
    char b[50] = "";

    printf("\na: %s", a);
    printf("\nb: %s", b);

    Copy(b, a);
    printf("\n-------------");
    printf("\na: %s", a);
    printf("\nb: %s", b);
}