#include <stdio.h>

// Khi truyền biến vào một hàm, nó sẽ có hai khái niệm: truyền tham chiếu và truyền tham trị.

// 1. Truyền tham trị là truyền cho đối số một bản sao, nghĩa là giá trị của biến đó sẽ được sao chép sang biến tham số truyền vào hàm.
// Đây cũng là cách chúng ta sử dụng hàm bình thường.
// 2. Truyền tham chiếu chính là cách chúng ta truyền cho nó một bản gốc thông qua địa chỉ ‘&‘.
// Nghĩa là giá trị của biến tham số truyền vào hàm, sẽ là giá trị của biến truyền vao hàm đó.

// Truyền tham trị không làm thay đổi biến sau khi truyền
void swap_ThamTri(int a, int b) // không có '&' có nghĩa là truyền vào giá trị
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// Truyền tham chiếu làm thay đổi biến sau khi truyền.
void swap_thamchieu(int &a, int &b) // có '&' nghĩa là điền vào vị trí của biến trong bộ nhớ, biến a và b ở vị trí nào để truyền vào vị trí đó.
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);

    printf("\nGia tri ban dau: a = %d va b = %d", a, b);
    swap_ThamTri(a, b);
    printf("\nGia tri sau tham tri: a = %d va b = %d", a, b);
    swap_thamchieu(a, b);
    printf("\nGia tri sau tham chieu: a = %d va b = %d", a, b);
}
