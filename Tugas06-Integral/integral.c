#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//inisialisasi fungsi numeric
double fungsi_utama(double x) {
    return 6*pow(x,3)+2;
}
//insialisasi fungsi analitik
double fungsi_analitik(double x){
    return ((3*pow(x,4))/2+(2*x));
}

void main(){
    int jumlah_subinterval;
    double hasil=0.0,batas_bawah,batas_atas,delta_x,x_i,hasil_analitik;

    //input nilai batas atas,bawah, dan jumlah interval
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
    
    //menjumlahkan semua fungsi subinterval
    int i = 1;
    while (i<=jumlah_subinterval)
    {
        x_i = batas_bawah + i*delta_x;
        hasil += 2*fungsi_utama(x_i);
        i+=1;
    }
    //hasil penjumlahan fungsi subinterval ditambah dengan penjumlahan fungsi interval atas dan bawah
    hasil+=(fungsi_utama(batas_atas)+fungsi_utama(batas_bawah));
    //menghitung hasil penjumlahan fungsi interval dengan delta x lalu dibagi dua
    hasil*=(delta_x/2);

    //output hasil integral numeric
    printf("Hasil integral numeric adalah %lf\n",hasil);
    //memanggil fungsi analitik dengan memasukan nilai batas atas dikurangi batas bawah
    hasil_analitik = fungsi_analitik(batas_atas)-fungsi_analitik(batas_bawah);
    //output hasil integral analitik
    printf("Hasil integral analitik adalah %.0lf\n",hasil_analitik);

}
