#include <stdio.h>

// Con trỏ(biến con trỏ) là các biến đặc biệt được sử dụng để lưu trữ địa chỉ.

/* Cách khai báo:
int* p;
int *p;
int* p1, p2; -> chỉ khai báo con trỏ p1, còn con trỏ p2 vẫn là một biến bình thường.
*/

int main()
{
    int var;
    printf("Nhap var: ");
    scanf("%d", &var); // Bạn có thể thấy rằng khi dùng hàm scanf, để truyền biến var ta cần dùng dấu &.
                       // Còn đối với hàm printf thì lại không cần. Lý do ở đây là gì?
                       // Câu trả lời là vì scanf cần giá trị của biến, vì thế dấu & sẽ giúp nó định vị được địa chỉ của biến đó.
                       // Từ đó rút ra kết luận, mỗi biến đều được đính kèm địa chỉ của nó và giá trị nó đang lưu trữ.
                       //Để xác định được địa chỉ của biến, ta chỉ cần thêm dấu & đằng trước nó.

    printf("\nvar = %d", var);
    printf("\nDia chi cua var trong bo nho: %p", &var); // %p : Địa chỉ con trỏ

    /*
    // Cách gán địa chỉ và lấy dữ liệu con trỏ
    int *pc, c;
    c = 5;
    */

    /*
    // Gán giá trị
    pc = &c; //lấy địa chỉ của biến c đưa vào pc(pc lưu trữ địa chỉ của biến c).
    */

    /*
    //Lấy giá trị
    printf("%d", *pc); //Output: 5
    */

    int *pc, c;
    c = 7;
    pc = &c;                            // &:nơi xác định địa chỉ biến c.(dùng để truyền biến)
    printf("\nC: %d ", *pc);            // nếu gọi *pc: lấy ra một biến/giá trị(c) tại địa chỉ pc(con trỏ).
    printf("\nDia chi cua c: %d ", pc); // nếu gọi pc thì chỉ truy cập địa chỉ pc.

    *pc = 2; // thay đổi giá trị của địa chỉ pc, rồi nó cũng thay đổi giá trị của biến c.
    printf("\nC: %d", c);
    printf("\nGia tri cua *pc: %d", *pc);
}