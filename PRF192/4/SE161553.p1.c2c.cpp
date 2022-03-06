#include <stdio.h>

main()
{
    int n = 260;
    int *p = &n; // Assign pointer p equals to address memory n
    printf("n=%d\n", n);
    /* khai báo con tro *pp kieu char tro toi o nho dau tien cua n thong qua cau lenh
    char * pp = (char *) p -> luc nay pp tro toi o nho dau tien cua n*/
    char *pp = (char *)p;
    *pp = 0; // thay doi gia tri o nho 1 tu 0000 0100 thành 0000 0000

    /*lay gia tri cua n trong bo nho sau do in ra. Trinh tu lay ra gia tri tu bo nho nguoc
    lai so voi luc ghi vao, byte nao ghi vao sau se duoc in ra truoc, byte cao cua n 
    duoc ghi vao sau nen se duoc lay ra truoc
    Do vay du lieu lay ra là 0000 0001 0000 0000 = 256*/
    printf("n=%d\n", n);
}

