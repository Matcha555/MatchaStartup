#include <stdio.h

int arr[50][50], m, n;

void Import(int arr[][50], int &m, int &n)
{
    do
    {
        printf("Press m and n: ");
        scanf("%d%d", &m, &n);
    } while (m <= 0 || n <= 0);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void Export(int arr[][50], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
    printf("\n");
}

double Average(int arr[][50], int m, int n)
{
    if (m <= 0 || n <= 0)
        return 0;

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    double Avr = double(sum) / (m * n); //Ép kiểu: ép giá trị int sang double.
    return Avr;
}

// Tính theo điều kiện bất kỳ
double Divide3(int arr[][50], int m, int n)
{
    if (m <= 0 || n <= 0)
        return 0;

    int sum3 = 0;
    int amount3 = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] % 3 == 0)
            {
                amount3++; // Số lượng chia hết cho 3 tăng lên một đơn vị.
                sum3 += arr[i][j];
            }
        }
    }
    double Avr = 0;
    if (amount3 > 0)
        Avr = double(sum3 / amount3);
    return Avr;
}

int main()
{
    printf("\n---------------\n");
    Import(arr, m, n);
    Export(arr, m, n);
    printf("Average: %.2f", Average(arr, m, n));
    printf("\n");
    printf("Average3: %.2f", Divide3(arr, m, n));
}
