#include <stdio.h>
#include <string.h>

struct student
{
    int age;
    char name[50], id[10];
    char gender[10];
    char date[20];
    float average;
    float p1, p2, p3;
};
typedef struct student ST;

void Import(ST &x)
{
    fflush(stdin);
    printf("\nEnter name: ");
    gets(x.name);
    fflush(stdin);
    // printf("Enter ID number: ");
    // gets(x.id);
    // printf("Enter age: ");
    // scanf("%d", &x.age);
    // printf("Enter gender: ");
    // scanf("%s", x.gender);
    // printf("Enter date: ");
    // scanf("%s", x.date);
    printf("Enter average: ");
    scanf("%f", &x.average);
    // printf("Enter p1: ");
    // scanf("%f", &x.p1);
    // printf("Enter p2: ");
    // scanf("%f", &x.p2);
    // printf("Enter p3: ");
    // scanf("%f", &x.p3);
}

void ave(ST *x)
{
    x->average = (x->p1 + x->p2 + x->p3) / 3;
}

void Export(ST x)
{
    printf("\nName: %s", x.name);
    // printf("\nAge and gender: %d & %s", x.age, x.gender);
    // printf("\nDate: %s", x.date);
    // ave(&x);
    printf("\nAverage: %1.2f", x.average);
}

// Input the list of students
void list(ST a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n\t\t- Enter the number of student: %d", i + 1);
        Import(a[i]);
    }
}

// Output the list of students
void outList(ST a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n- Student: %d", i + 1);
        Export(a[i]);
    }
}

// Find the students base on average point.
void findPoint(ST a[], int n, float point)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i].average == point)
        {
            printf("\n\n\t\tNumber: %d", count++);
            Export(a[i]);
        }
    }
}

// Add a student.
void add(ST a[], ST x, int &n, int vt)
{
    for (int i = n - 1; i >= vt; i--)
    {
        a[i + 1] = a[i];
    }
    a[vt] = x; // Gán số cần chèn(x) vào vị trí cần chèn.
    n++;
}

// Average < 5 -> delete
void less5(ST a[], int &n, int vt)
{
    for (int i = vt + 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    n--;
}

// Hoán vị 2 sinh viên
void temp(ST &x, ST &y)
{
    ST temp = x;
    x = y;
    y = temp;
}

// Sắp xếp theo điểm trung bình tăng dần
void increase(ST a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Nếu sinh viên trái > sinh viên phải
            if (a[i].average > a[j].average) // a[i] ở đây là một sinh viên
            {
                temp(a[i], a[j]);
            }
        }
    }
}

int main()
{
    ST a[100];
    ST x;
    int b;
    printf("\nList of students: ");
    scanf("%d", &b);
    list(a, b);
    printf("\n------\n");
    outList(a, b);

    // float po;
    // printf("\n+ Enter the point you wanna find: ");
    // scanf("%f", &po);
    // findPoint(a, b, po);

    // int vt;
    // printf("\n+ Enter the position you wanna add: ");
    // scanf("%d", &vt);
    // Import(x);
    // add(a, x, b, vt);
    // outList(a, b);

    increase(a, b);
    printf("\n\n----Increase----");
    outList(a, b);

    // int k; // K is the position you wanna delete.
    // printf("\nThe postion you wanna delete: ");
    // scanf("%d", &k);
    // less5(a, b, k);
    // outList(a, b);
}