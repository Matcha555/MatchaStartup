#include <stdio.h>

struct student
{
    char name[40]; // *name = name[]; 2 kiểu khai báo giống nhau.
    char id[10];
    float point;
};

typedef struct student ST;

void Import(ST &st)
{
    fflush(stdin); // Xóa bộ nhớ đệm(xóa dấu xuống dòng)
    printf("\nPress name: ");
    gets(st.name);
    fflush(stdin); // Xóa bộ nhớ đệm(xóa dấu xuống dòng)
    printf("Press ID: ");
    // scanf("%d", &st.id);
    gets(st.id);
    printf("Press point: ");
    scanf("%f", &st.point);
}

void Export(ST st)
{
    // C1: Khai báo bình thường
    printf("\nName: %s", st.name);
    printf("\nID: %s", st.id);
    printf("\nPoint: %3.2f", st.point);
}

void Export1(ST st)
{
    printf(": %s", st.name);
    printf("\nID: %s", st.id);
    printf("\nPoint: %3.2f", st.point);
}

void List(ST st[], int n)
{
    for (int i = 0; i < n; i++) // i quản lý vị trí của các phần tử trong mảng st
    {
        printf("\n- Student %d: ", i + 1); // i+1:bắt đàu từ sinh viên thứ 1
        Import(st[i]);                     // Nhập từng sinh viên thứ i trong mảng st
    }
}

void Out(ST st[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n- Student %d", i + 1);
        Export1(st[i]);
    }
}

int main()
{
    // ST x; // khai báo ra một sinh viên x.
    // printf("\n------------Profile------------\n");
    // Import(x);
    // printf("\n-------------------------------\n");
    // Export(x);

    int n;
    ST st[10]; // Declare an array contains many students.
    printf("\nList of students: ");
    scanf("%d", &n);
    List(st, n);
    printf("\n\t\t----------List---------\n");
    Out(st, n);
}