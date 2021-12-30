#include <stdio.h>

int arr[100], n;

void nhapMang(int arr[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void xuatMang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

// Xóa vị trí muốn xóa
void xoaMangTaiViTri(int arr[], int &n, int vi_tri_muon_xoa) //&n: khi xóa phần từ, số lượng phần tử thay đổi, dấu & hiện giá trị bị thay đổi. Nếu không dấu &, giá trị không thay đổi.
{
	// 1 2 3 4 5    => xóa số 3[vị trí thứ 2(vi_Tri_Muon_Xoa), số thứ tự 3]
	// 1 2 4 5

	for (int i = vi_tri_muon_xoa; i < n - 1; i++) // Nếu muốn xóa số 3, lấy 4 đè lên 3, sau đó 5 đè lên 4.
	{
		arr[i] = arr[i + 1]; // Dịch các phần tử sang trái 1 vị trí
	}
	n--; // n giảm đi một đơn vị. (có nghĩ là giảm kích thước của mảng)
}

// Xóa phần tử muốn xóa
void xoaPhanTu(int arr[], int &n)
{
	int gt;
	printf("\nNhap vao gia tri can xoa: ");
	scanf("%d", &gt);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == gt) // giá trị muốn xóa
			xoaMangTaiViTri(arr, n, i);
	}
}

// Xóa phần tử trùng nhau
void xoaPhanTuTrungNhau(int arr[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++) // Nếu phía sau arr[i] có phần tử arr[j] trùng với arr[i] thì xóa phần tử arr[j].
		{
			if (arr[i] == arr[j]) // arr[j] là phần tử trùng của phần tử arr[i].
			{
				xoaMangTaiViTri(arr, n, j); // Xóa phần tử tại vị trí thứ j.
				j--;						// Nếu như xóa phần tử tại vị trí thứ j thì sẽ kiểm tra lại một lần nữa phần tử vị trí thứ j đó.
			}
		}
	}
}

void xoaSoChan(int arr[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			xoaMangTaiViTri(arr, n, i);
			i--;
		}
	}
}

int main()
{
	printf("\nNhap vao so luong phan tu: ");
	scanf("%d", &n);
	printf("\n             Nhap Mang             ");
	nhapMang(arr, n);
	printf("\n             Xuat Mang             ");
	printf("\nGia tri cua mang la: ");
	xuatMang(arr, n);

	// int vi_tri_muon_xoa;
	// printf("\nNhap vao vi tri muon xoa: ");
	// scanf("%d", &vi_tri_muon_xoa);
	// printf("\n\n=> Mang sau khi xoa vi tri muon xoa: ");
	// xoaMangTaiViTri(arr, n, vi_tri_muon_xoa);

	// xoaPhanTu(arr, n);
	// printf("\n=> Mang sau khi xoa phan tu: ");

	printf("\n=> Mang sau khi xoa phan tu trung: ");
	xoaPhanTuTrungNhau(arr, n);

	// xoaSoChan(arr, n);
	// printf("\nMang sau khi xoa cac so chan: ");

	xuatMang(arr, n);
}