#include <stdio.h>
#include <string.h> //Thư viện hỗ trợ các hàm trên chuỗi

// Tự xây dụng hàm strlen
int my_strlen(char name[])
{
    int k = 0; // Biến vị trí tại chuỗi bắt đầu vị trí số 0

    // Cho vòng lặp lặp vô tận để duyệt từ đàu chuỗi đên cuối chuỗi - gặp ký tự \0 thi dừng
    while (true)
    {
        if (name[k] == '\0')
            return k; // vị trí của ký tự '\0' cũng chính là độ dài của chuỗi đó.
        k++;          // Vị trí tăng dần đên ký tự '\0'
    }
}

void xoaXuongDongfgets(char name[])
{
    // size_t: là loại dữ liệu không dấu(số nguyên)
    size_t len = strlen(name);
    // TITV\n\0  =>  TITV\0\0
    if (name[len - 1] = '\n') // Mảng name tại vị trí thứ "len - 1" bằng cho '\n'
    {
        name[len - 1] = '\0'; // Nếu nhận thấy rằng ký tự cuối cùng của chuỗi là '\n' thì chuyển nó thành '\0'
    }
}

int main()
{
    // char name[50] = "Pham Minh Quang";
    // printf("\nYour name is: %s", name);
    // printf("\nLength = %d", strlen(name)); // Hàm strlen – hàm lấy chiều dài chuỗi, muốn khai báo phải có thư viện <string.h>

    // printf("\nmy_strlen: ");
    // printf("\nYour name is: %s", name);
    // printf("\nLength = %d", my_strlen(name));

    // Hàm fgets
    char name[50];
    printf("\nPress your name: ");
    fgets(name, sizeof(name), stdin);
    xoaXuongDongfgets(name);
    printf("\nLength = %d", my_strlen(name));
}