#include <stdio.h>

// Tính trung bình cộng mảng, tính trung bình cộng số dương.

float average(int x[], int b) // Tinh trung binh cong nen tra ve float(vi no la phep chia)
{
    // Muon tinh trung binh cong, truoc het phai tinh tong.
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum += x[i];
    }
    return (float)sum / b;
}

int main()
{
    int t[50];
    int b;

    printf("Press an element(0<n<50): ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &t[i]);
    }

    printf("\nAverage: %.2f", average(t, b));

    return 0;
}
