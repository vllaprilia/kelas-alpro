#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double fungsi_utama(double a) {
    return 6*pow(a,3)+2;
}

void main(){
    int jumlah_subinterval;
    double hasil=0.0,batas_bawah,batas_atas,delta_x,x_i;

    do
    {
        printf("Masukan batas atas : "); scanf("%lf",&batas_atas);
        printf("Masukan batas bawah : "); scanf("%lf",&batas_bawah);
        printf("Masukan Jumlah subinterval: "); scanf("%d",&jumlah_subinterval);
        system("clear");
        printf("Jumlah interval tidak boleh negatif!!!\n\n");
        printf("Masukan angka lain!!\n\n");
    } while (jumlah_subinterval < 0);
    system("clear");

    delta_x = (batas_atas-batas_bawah)/jumlah_subinterval;
    
    int i = 1;

    while (i<=jumlah_subinterval)
    {
        x_i = batas_bawah + i*delta_x;
        hasil += 2*fungsi_utama(x_i);
        i+=1;
    }
    hasil+=(fungsi_utama(batas_atas)+fungsi_utama(batas_bawah));
    hasil*=(delta_x/2);
    printf("Hasil perkiraan integral adalah %lf\n",hasil);
}