#include <stdio.h>

/*
 do{
     noi dung can lap
 } while(dieu_kien_lap);
 */

/*
- Lưu ý rằng biểu thức điều kiện xuất hiện ở cuối vòng lặp, do đó các câu lệnh trong vòng lặp do-while thực thi
một lần trước khi điều kiện được kiểm tra.
- Nếu điều kiện là true, luồng điều khiển nhảy trở lại để thực thi các lệnh trong do. Quá trình này lặp lại cho
đến khi điều kiện đã cho trở thành false.
*/

int main()
{

    int a = 5;

    do
    {
        printf("Value: %d\n", a);
        a += 1;
    } while (a < 20); // Nếu nhập lớn hơn 20 thì kết thúc chương trình.

    return 0;
}