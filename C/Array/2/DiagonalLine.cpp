// Kiểm tra mảng đối xứng qua đường chéo chính và đối xứng qua đường chéo phụ
#include <stdio.h>
int arr[50][50], n;
// Vì mảng này là mảng vuông cho nên số lượng dòng và cột bằng nhau.

void Import(int arr[][50], int &n)
{
    do
    {
        printf("Press n: ");
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void Export(int arr[][50], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }
}

/*
      1   2   3
      4   5   6
      7   8   9
Đường chéo chính: 159
Đường chéo phụ: 367

VD ma trận đối xứng:
      1  2  3  5
      2  8  7  6
      3  7  9  4
      5  6  4  9

  arr[i][j] = arr[j][i];
  arr[1][2] = 7;
  arr[2][1] = 7;
*/

int Test(int arr[][50], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != arr[j][i]) // Kiểm tra chỉ cần có một cặp nào đó không giống nhau là sai toàn bộ.
                return 0;
        }
    }
    return 1;
}

int main()
{

    printf("\n-----------\n");
    Import(arr, n);
    Export(arr, n);

    printf("%s", (Test(arr, n) == 1 ? "Symmetrical array!" : "Asymmetrical array!"));
}