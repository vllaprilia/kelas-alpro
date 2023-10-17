#include <stdio.h>

int main(){
    int c;
    float BMI,BB,TB;
    
    printf("(1)Laki-laki\n(2)Perempuan\nPilih Jenis Kelamin : "); scanf("%d",&c);

    switch (c)
    {
    case 1 :
        printf("Masukan Berat badan (kg): "); scanf("%f",&BB);
        printf("Masukan Tinggi badan (cm): "); scanf("%f",&TB);
        TB/=100;
        BMI = BB/(TB*TB);

        if (BMI >= 17 && BMI <= 23) {
            printf("BMI = %.2f\n",BMI);
            printf("Badan anda ideal");
        } else {
            printf("BMI = %.2f",BMI);
            printf("Badan anda tidak ideal");
        }
        break;
    case 2 :
        printf("Masukan Berat badan (kg): "); scanf("%f",&BB);
        printf("Masukan Tinggi badan (cm): "); scanf("%f",&TB);
        TB/=100;
        BMI = BB/(TB*TB);

        if (BMI >= 18 && BMI <= 25) {
            printf("BMI = %.2f\n",BMI);
            printf("Badan anda ideal");
        } else {
            printf("BMI = %.2f",BMI);
            printf("Badan anda tidak ideal");
        }
        break;
    default:
    printf("Pilihan tidak ada");
        break;
    }
}
