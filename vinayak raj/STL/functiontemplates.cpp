#include<bits/stdc++.h>


using namespace std;

#define speed; ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

template <class T>
void bSort(T a[], int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; i < j; j--)
			if (a[j] < a[j - 1])
			swap(a[j], a[j - 1]);
}


int main() {
    speed;
	int a[5] = {10, 50, 30, 40, 20};
	int n = sizeof(a) / sizeof(a[0]);


	bSort<int>(a, 5);

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
return 0;
}
