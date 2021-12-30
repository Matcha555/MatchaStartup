#include <stdio.h>

// Đệ quy trong C là quá trình trong đó một phương thức gọi lại chính nó một cách liên tiếp.

/* Cấu trúc:

  kieu_tra_ve hamdequi() {

    hamdequi();  // goi lai chinh no

 }

 int main() {

    hamdequi();

 }
*/

// Bai toan tinh giai thua
int giaithua(int n) // n: nhận vào một con số.
{
    if (n == 0 || n == 1) // VD: nếu n=0 và n=1 thì sẽ trả về số 1.
                          // Nếu n != 0 và n != 1 thì sẽ trả về n * giaithua(n - 1)(Bước dưới).
        return 1;
    else
        return n * giaithua(n - 1);
}

int main()
{
    int n;

    do
    {
        printf("Nhap vao n(n>=0): ");
        scanf("%d", &n);
    } while (n < 0); // lặp lại vòng này nhiều lần, khi nào n<0 thì nó sẽ lặp lại. Khi nào n>=1 thì nó dừng.

    printf("\nGiai thua la: %d! = %d ", n, giaithua(n));
}
