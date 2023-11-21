#include <stdio.h>

char nama[30],nim[30];
char huruf[7][7] = {"A", "AB", "B", "BC", "C", "D", "E"};
int nilaiTugas, nilaiQuiz, nilaiUTS, nilaiUAS, nilaiAkhir,mutuHuruf;

int calcNIlai(int nilaiTugas, int nilaiQuiz, int nilaiUTS, int nilaiUAS) {
    nilaiAkhir = ((nilaiTugas*10)/100) + ((nilaiQuiz*20)/100) + 
                ((nilaiUTS*30)/100) + ((nilaiUAS*40)/100);

    return nilaiAkhir;
}

void displayAkhir(){
    printf("===OUTPUT===\n");
    printf("Nama mahasiswa\t: %s\n", nama);
    printf("NIM mahasiswa\t: %s\n", nim);
    printf("Nilai tugas\t: %d\n", nilaiTugas);
    printf("Nilai quiz\t: %d\n", nilaiQuiz);
    printf("Nilai UTS\t: %d\n", nilaiUTS);
    printf("Nilai UAS\t: %d\n", nilaiUAS);
    printf("Nilai Akhir\t: %d\n", nilaiAkhir);
    printf("Mutu Huruf\t: %s\n", huruf[mutuHuruf]);

    if (mutuHuruf >= 0 && mutuHuruf <= 3) printf("Keterangan\t: Lulus\n");
    if (mutuHuruf >= 4 && mutuHuruf <= 6) printf("Keterangan\t: Tidak lulus\n");
}

int main(){
    printf("Nama mahasiswa\t: "); gets(nama);
    printf("NIM mahasiswa\t: "); gets(nim);
    printf("Masukan nilai tugas\t: "); scanf("%d", &nilaiTugas);
    printf("Masukan nilai quiz\t: "); scanf("%d", &nilaiQuiz);
    printf("Masukan nilai UTS\t: "); scanf("%d", &nilaiUTS);
    printf("Masukan nilai UAS\t: "); scanf("%d", &nilaiUAS);
    
    nilaiAkhir = calcNIlai(nilaiTugas,nilaiQuiz,nilaiUTS,nilaiUAS); 
    mutuHuruf = calcNIlai(nilaiTugas,nilaiQuiz,nilaiUTS,nilaiUAS);

    if (mutuHuruf > 90 && mutuHuruf <= 100) mutuHuruf = 0;
    if (mutuHuruf > 80 && mutuHuruf <= 90) mutuHuruf = 1;
    if (mutuHuruf > 70 && mutuHuruf <= 80) mutuHuruf = 2;
    if (mutuHuruf > 60 && mutuHuruf <= 70) mutuHuruf = 3;
    if (mutuHuruf > 50 && mutuHuruf <= 60) mutuHuruf = 4;
    if (mutuHuruf >= 45 && mutuHuruf <= 50) mutuHuruf = 5;
    if (mutuHuruf >= 0 && mutuHuruf < 45) mutuHuruf = 6;

    displayAkhir();
}