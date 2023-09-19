#include <stdio.h>

int main(){
    int quis = 0,tugas = 0,absensi = 0,praktek = 0,uas = 0,grade = 0;
    int tidaklulus[10];
    int lulus[10];
    float ratarata;
    puts("-------------------------------------------------------");
    puts("---------Program Menghitung Nilai Mahasiswa------------");
    puts("-------------------------------------------------------");

   for(int i = 1 ; i <= 10 ; i++){
    printf("Mahasiswa %d\n", i);

    printf("\nMasukkan Nilai Quis = ");
    scanf("%d", &quis);
    
    printf("Masukkan Nilai Tugas = ");
    scanf("%d", &tugas);

    printf("Masukkan Nilai Absensi = ");
    scanf("%d", &absensi);

    printf("Masukkan Nilai Praktek = ");
    scanf("%d", &praktek);

    printf("Masukkan Nilai Uas = ");
    scanf("%d", &uas);

    ratarata = quis + tugas + absensi + praktek + uas;
    grade = ratarata / 5;

    if(grade >= 86 && grade <= 100){
        printf("\nNilai A\n");
    }
        else if (grade >=76 && grade <=85){
        printf("\nNilai B\n");
        }
        else if (grade >=66 && grade <=75){
        printf("\nNilai C\n");
        }
        else if (grade >=56 && grade <=65){
        printf("\nNilai D\n");
        printf("\nANDA TIDAK LULUS\n");
        }
        else if(grade <=55){
        printf("\nNilai E\n");
        printf("ANDA TIDAK LULUS\n");
        }
        printf("Rata-Rata Mahasiswa adalah %d\n\n", grade);
   }
    puts("-------------------------------------------------------");
    puts("-------------------Program Selesai---------------------");
    puts("-------------------------------------------------------");
}