#include <stdio.h>

int arr[50], n;

void nhapmang(int arr[], int &n)
{
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int vtc(int n)
{
    int vt = -1;
    do
    {
        printf("\nNhap vi tri can chen: ");
        scanf("%d", &vt);
    } while (vt < 0 || vt > n);
    return vt;
}

void chen(int arr[], int &n, int vtcc, int scc)
{
    for (int i = n; i >= vtcc; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[vtcc] = scc;
    n++;
}

void xoa(int arr[], int &n, int vtx)
{
    for (int i = vtx; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}

int Linearsearch(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    char gt;

    do
    {
        printf("\n     Menu     \n");
        printf("1 - Chen phan tu \n");
        printf("2 - Xoa phan tu\n");
        printf("3 - Linearsearch\n");
        printf("x - Thoat chuong trinh.!\n");
        printf("\nLua chon: ");
        scanf(" %c", &gt);

        if (gt == '1')
        {
            nhapmang(arr, n);
            xuatmang(arr, n);

            int vtcc, scc;
            vtcc = vtc(n);

            printf("\n->Nhap so can chen: ");
            scanf("%d", &scc);

            printf("=>Mang sau khi chen: \n");
            chen(arr, n, vtcc, scc);
            xuatmang(arr, n);
        }
        else if (gt == '2')
        {
            nhapmang(arr, n);
            xuatmang(arr, n);

            int vtx;
            printf("\n->Nhap vi tri muon xoa: ");
            scanf("%d", &vtx);

            printf("=>Mang sau khi xoa: \n");
            xoa(arr, n, vtx);
            xuatmang(arr, n);
        }

        else if (gt == '3')
        {
            nhapmang(arr, n);
            xuatmang(arr, n);

            int k;
            printf("\nNhap k: ");
            scanf("%d", &k);

            int kq = Linearsearch(arr, n, k);
            if (kq == 1)
                printf("\nTon tai k trong mang!");
            else
                printf("\nKhong ton tai k trong mang!");
        }

    } while (gt != 'x');
}