#include <stdio.h>

// Chuyển đổi từ hệ thập phân sang hệ nhị phân

void nhiPhan(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        int y = n % 2; /* Chia xong lưu phần dư vào trong mảng, lúc nào bằng 0 thì dừng. VD: 7/2 = 3 dư 1 -> lấy 1
                                                                                             3/2 = 1 dư 1 -> lấy 1
                                                                                             1/2 = 0 dư 1 -> lấy 1
                                                                                             => Hệ nhị phân: lấy số dư từ dưới lên => Nhị phân của 7: 111 */
        nhiPhan(n / 2);
        printf("%d", y);
    }
}

int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 0);

    nhiPhan(n);
}