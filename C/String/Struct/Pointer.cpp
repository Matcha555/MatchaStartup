#include <stdio.h>

struct student
{
    char name[40];
    char id[10];
    float point;
};
typedef struct student hs;

void Import(hs &sv)
{
    printf("Press name: ");
    fflush(stdin);
    gets(sv.name);
    printf("Press id: ");
    scanf("%s", sv.id);
    printf("Press point: ");
    scanf("%f", &sv.point);
}

void Export(hs sv)
{
    printf("Name: %s", sv.name);
    printf("\nID: %s", sv.id);
    printf("\nPoint: %.2f", sv.point);
}

int main()
{
    hs x;
    hs y;
    printf("\n------------\n");
    Import(x);

    // Cach 1: gan struct sinh vien x cho sinh vien y.
    // y = x;

    // Cách 2: gán từng thành phần của struct này cho từng thành phần tương ứng của struct kia.
    // y.name = x.name;
    // y.id = x.id;
    // y.point = x.point;

    printf("\n---\n");
    printf("Student x: \n");
    Export(x);
    printf("\nStudent y: \n");
    Export(y);
    // Lưu ý: nếu trong struct student đang chứa 1 biến con trỏ thì không dùng được toán tử gán để gán giá trị từ struct sang struct kia.
}