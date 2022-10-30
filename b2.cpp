#include<iostream>
using namespace std;

void nhap_hang_cot(int &m, int &n) {

	do {
		cout << "nhap so hang m:\t";
		cin >> m;
		cout << "nhap so cot n:\t";
		cin >> n;	
	}

	while(m<0 || n<0);
}	
	
void nhap_ma_tran(int m, int n, int **a) {
		
		
//	cout << "nhap ma tran:\n";
	for (int i=0; i<m;i++){
		a[i] = new int [n];
	}
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			cout << "nhap " << "a[" <<i+1 <<"][" <<j+1 << "]" <<"\t";
			cin >> a[i][j];
		}
	}
	
}


void tinh(int m, int n, int **a, int q, int p, int **b) {
	if(n==p) {
	
	int **c;
	c = new int *[m];
	for (int i=0; i<m;i++){
		c[i] = new int [q];
	}
	
	for (int i=0;i<m;i++) {
		for (int j=0;j<q;j++) {
			c[i][j] = 0;
		}
	}
	
	
	
	int phu = 0;
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			c[i][j] += a[i][j]*b[j][i];	
		}
	}
	}
}






int main() {
	cout << "nhap ma tran A:\n";
	
	int m,n, **a;
	a = new int *[m];
	nhap_hang_cot(m, n);
	nhap_ma_tran(m,n,a);
	
	cout << "nhap ma tran B:\n";
	int p,q, **b;
	nhap_hang_cot(p, q);
	
	b = new int *[p];
	nhap_ma_tran(p,q,b);
	
	
	
	
	
}
