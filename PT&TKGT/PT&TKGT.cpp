#include <iostream>
using namespace std;
void quickSort(int a[], int l, int r) { // p: pivot - chot / l: left - trai / r: right - phai
	int p = a[(l + r) / 2]; // lay chot la phan tu chinh giua
	int i = l, j = r;
	while (i < j) { // duyet tu trai sang phai
		while (a[i] < p) {
			i++;
		}
		while (a[j] > p) {
			j--;
		}
		if (i <= j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r) {
		quickSort(a, i, r);
	}
	if (l < j) {
		quickSort(a, l, j);
	}
}
int main() {
	int n = 0, a[1000]{};
	cout << "Nhap so phan tu mang : ";
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	quickSort(a, 0, n - 1); // truyen vao ham mang a, left la 0 (vi tri phan tu dau tien) va right la vi tri phan tu cuoi cung cua mang
	for (int i = 0; i < n; ++i) cout << a[i] <<" ";
	return 0;

}