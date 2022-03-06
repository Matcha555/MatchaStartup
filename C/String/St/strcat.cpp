#include <stdio.h>
#include <string.h>

// Tự xây dựng hàm stract
void name(char Woman[], char Man[])
{
    // Trước hết, muốn nối chuỗi phải lấy độ dài 2 chuỗi.
    size_t n1 = strlen(Woman); //Độ dài của chuỗi Woman
    size_t n2 = strlen(Man);   //Độ dài của chuỗi Man

    // Woman = "Hello *"     Đầu tiên xuất phát từ n1(*); n1 là vị trí cuối cùng
    // Man = "Guys"          Sau đó lấy vị trí thứ j(G) gán vào (*), sau đó i++ lấy được (u), rồi i++ tiếp lấy được (y), i++ tiếp lấy được (s)
    //  => "Hello Guys\0"      ->Đây là n1 + n2
    int j = 0;
    for (int i = n1; i < n1 + n2; i++) // len1 + len2: kích thước mới(mảng mới)
    {
        Woman[i] = Man[j];
        j++;
    }
    // Sau khi nối xong Woman và Man, phải thêm '\0' để cho chương trình biết là kết thúc chuỗi
    Woman[n1 + n2] = '\0';
}

int main()
{
    char Woman[50] = "Doan Trieu Dieu Anh ";
    char Man[40] = "Pham Minh Quang";

    printf("\nWoman = %s", Woman);
    printf("\nMan = %s", Man);
    // strcat(Woman, Man);   // Hàm strcat là hàm nối hai chuỗi

    name(Woman, Man);
    printf("\nCouple = %s is a beautiful couple.", Woman);
}