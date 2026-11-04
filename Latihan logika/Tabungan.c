#include <stdio.h>


int hitungsaldo(int saldo);
void cekSaldo(int *ceksaldo);

int main(){
    int saldo = 0;

    saldo = hitungsaldo(saldo);
    cekSaldo(&saldo);

    return 0;
}

int hitungsaldo(int saldo){
    int saldoawal;
    int uangmasuk;
    int subtotal;
    char pilihan = 'y';

    printf("Masukkan saldo awal: ");
    scanf("%d", &saldoawal);

    subtotal = saldoawal;

    while (pilihan == 'y' || pilihan == 'Y') {
        printf("masukkan uang yang ingin ditabung:");
        scanf("%d", &uangmasuk);

        if (uangmasuk >= 1){
         subtotal += uangmasuk;
           
        }else if(uangmasuk < 1){
            printf("====================================================\n");
            printf("Jumlah uang yang dimasukkan tidak valid!\n");
        }

        printf("Saldo awal: %d\n", saldoawal);
        printf("Saldo saat ini: %d\n", subtotal);
        printf("Jumlah uang yang dimasukkan: %d\n", uangmasuk);

        printf("Ingin menambah saldo lagi? (y/n): ");
        scanf(" %c", &pilihan);

        }


    return saldo = subtotal;
}

void cekSaldo(int *ceksaldo){
    if(*ceksaldo >= 500000){
        printf("Anda memiliki saldo yang cukup!\n");
    }else if(*ceksaldo < 500000){
        printf("Anda memiliki saldo yang kurang!\n");
    }

}