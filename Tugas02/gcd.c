#include <stdio.h>

int main() {
	int m,n,r,i=1;
	printf("Masukan nilai M : ");
	scanf("%d",&m);
	printf("Masukan nilai N : ");
	scanf("%d",&n);

	while (n != 0) {
		printf("proses ke : %d\n",i);
		r = m%n; 
		printf("Hasil M modulus N : %d\n",r);
		m=n;
		printf("nilai m terbaru : %d\n",m);
		n=r;
		printf("nilai n terbaru : %d\n",n);
		i+=1;
	}
	if (m=-m) {
		m*=-1;
	}
	printf("Nilai GCD nya adalah : %d\n",m);

}
