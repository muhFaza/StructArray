//2502141990
//Muhammad Faza
//Compiler - Dev C++
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alamat{
    char NamaJalan[100];
    int NomorRumah;
    char Kota[100];
    char Provinsi[100];
};

struct TanggalLahir{
    int Tanggal;
    int Bulan;
    int Tahun;
};

struct Dosen {
    int NoDosen;
    int NIDN;
    char Nama[100];
    char tempatLahir[100];
    struct Alamat address;
    struct TanggalLahir tgl;
}dsn[100];

//idx -> untuk mengetahui berapa byk dosen yang ada
int idx = 0;


void clrscr(){
    system("clear");
}

void insertDosen(){
    printf("Input No Dosen: ");
    scanf("%d", &dsn[idx].NoDosen ); getchar();

    printf("NIDN : ");
    scanf("%d", &dsn[idx].NIDN ); getchar();

    printf("Nama : ");
    scanf("%[^\n]", dsn[idx].Nama ); getchar();

    printf("Kota : ");
    scanf("%[^\n]", dsn[idx].address.Kota ); getchar();

    printf("Provinsi : ");
    scanf("%[^\n]", dsn[idx].address.Provinsi ); getchar();

    printf("Nama Jalan : ");
    scanf("%[^\n]", dsn[idx].address.NamaJalan ); getchar();

    printf("Nomor Rumah : ");
    scanf("%d", &dsn[idx].address.NomorRumah ); getchar();
    printf("Tempat: ");
    scanf("%[^\n]", dsn[idx].tempatLahir ); getchar();

    printf("Tanggal Lahir (dd mm yyyy): ");
    scanf("%d", &dsn[idx].tgl.Tanggal ); getchar();
    scanf("%d", &dsn[idx].tgl.Bulan ); getchar();
    scanf("%d",&dsn[idx].tgl.Tahun ); getchar();
    idx++;
    printf("Successfully added!!"); getchar();
}

void viewAll(){
    clrscr();
    if(idx == 0) {
        printf("Blm ada data\n");
        getchar();
        return;
    }
    for (int i = 0; i < idx; i++)
    {
        printf("DOSEN #%d\n", i+1);
        printf("No Dosen : %d\n", dsn[i].NoDosen );
        printf("NIDN : %d\n", dsn[i].NIDN );
        printf("Nama : %s\n", dsn[i].Nama );
        printf("Kota : %s\n", dsn[i].address.Kota );
        printf("Provinsi : %s\n", dsn[i].address.Provinsi );
        printf("Nama Jalan : %s\n", dsn[i].address.NamaJalan );
        printf("Nomor Rumah : %d\n", dsn[i].address.NomorRumah );

        printf("Tempat: %s\n", dsn[i].tempatLahir );
        printf("Tanggal Lahir : %d/%d/%d", dsn[i].tgl.Tanggal, dsn[i].tgl.Bulan,dsn[i].tgl.Tahun );
        printf("\n\n");
    }
    printf("Press enter...");
    getchar();

    
}

void menu(){
    int input = 0;
    while(1){
        clrscr();
        printf("Menu\n");
        printf("1. Insert Dosen\n");
        printf("2. View all dosen\n");
        printf("3. Exit\n");
        printf(">> ");
        scanf("%d", &input); getchar();
        if (input == 3) break;
        else if( input ==  2) viewAll();
        else if( input == 1) insertDosen();
    }

    
    
}

int main(){
    // int bln1 = 3;
    // int tgl1= 21;
    // char temp[10]; 
    // sprintf(temp, "%d%d", bln1,tgl1);  // ->  temp = {321}


    // int a = atoi(temp);  // return 321
    // printf("%d", a);
    clrscr();
    menu();
    
    return 0;
}
