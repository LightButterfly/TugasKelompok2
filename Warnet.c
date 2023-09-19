#include <stdio.h>

int main(){

    int TotalWaktu = 0, DiskonWaktu = 0, RpWaktu = 0, HargaAkhir = 0;

    printf("Berapa jam anda ingin bermain: ", TotalWaktu);
    scanf("%d", &TotalWaktu);

    RpWaktu = TotalWaktu * 10000;

    if(RpWaktu >= 90000){
        DiskonWaktu = DiskonWaktu + RpWaktu * 0.25;
    } else if(RpWaktu >= 80000){
        DiskonWaktu = DiskonWaktu + RpWaktu * 0.2;
    } else if(RpWaktu >= 60000){
        DiskonWaktu = DiskonWaktu + RpWaktu * 0.15;
    } else if(RpWaktu >= 40000){
        DiskonWaktu = DiskonWaktu + RpWaktu * 0.1;
    }

    HargaAkhir = RpWaktu - DiskonWaktu;

    printf("\nWaktu bermain             : %d jam", TotalWaktu);
    printf("\nHarga sebelum di diskon   : Rp.%d", RpWaktu);
    printf("\nDiskon yang didapat       : Rp.%d", DiskonWaktu);
    printf("\n\nTotal                     : %d", HargaAkhir);

return 0;
}