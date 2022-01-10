#include <stdio.h>
#include <stdlib.h>

int main()
{//MEKANISME MEMBAYAR PAJAK
     puts    ("=============================================================================================");
     puts    ("\t\t\t\tProgram Pembayaran Pajak");
     puts    ("\t\t\tProgram Menampilkan Struk Tagihan Negara");
     puts    ("\t\t\t  Lunasi Pajaknya, Awasi Penggunaannya");
     puts    ("=============================================================================================");

    char id [30],pw[30];
    printf("==== Login Akun Pajak  ====\n");
    printf("\nMasukkan ID : ");
    scanf("%s",id);
    printf("\nMasukkan Pass :");
    scanf("%s",pw);
    printf("\nTERIMA KASIH SUDAH LOGIN");
    printf("\n\nSILAHKAN PILIH PAJAKNYA\n\n");

     int tagihan [1];

     puts    ("Pilihan Pajak yang akan dibayarkan");
     tagihan[0] = "1.Pajak Bumi dan Bangunan";
     tagihan[1] = "2.Pajak Pertambahan Nilai (PPN)";
     tagihan[2] = "3.Pajak Penghasilan (PPh)";
     tagihan[3] = "4.Pajak Penjualan atas Barang Mewah (PPNBM)";
     tagihan[4] = "5.Pajak Penghasilan Pasal 22";

     for ( int a=0 ; a<5; a++ )
     {
     printf ("\n%s",tagihan[a]);
     }

     int pajak=0,jumlah_bayar_pajak,nama_pjk,tagihan_pajak,total,potongan,dibayar,mbayar,total1,pilih,tanggal,denda=100000;


     while(pajak<5)
    {
     printf  ("\n=============================================================================================\n");

     printf ("\nSilahkan pilih menu: ");
     scanf  ("%d",&pilih);


     if (pilih==1)
     {
     nama_pjk="Pajak Bumi dan Bangunan/bulan ", tagihan_pajak=2000000;
     }
     else if (pilih==2)
     {
     printf("\n");
     nama_pjk="Pajak Pertambahan Nilai (PPN)/bulan";tagihan_pajak=450000;
     }
     else if (pilih==3)
     {
     printf("\n");
     nama_pjk="Pajak Penghasilan (PPh)/bulan";tagihan_pajak=150000;
     }
     else if (pilih==4)
     {
     printf("\n");
     nama_pjk="Pajak Penjualan atas Barang Mewah (PPNBM)/bulan";tagihan_pajak=650000;
     }
     else if (pilih==5)
     {
     printf("\n");
     nama_pjk="Pajak Penghasilan Pasal 22/bulan";tagihan_pajak=550000;
     }

     else{
     nama_pjk="Tidak tersedia";tagihan_pajak=0;
     }



     printf("%s",nama_pjk);
     printf("\nHarga Pajak :%d\n",tagihan_pajak);

     printf("\n=============================================================================================\n");
     printf("\nBerapa kali bayar : ");
     scanf ("%d",&jumlah_bayar_pajak);

     printf("Masukkan tanggal pembayaran : ");
     scanf ("%d",&tanggal);
     printf("\n=============================================================================================\n");

     total=tagihan_pajak*jumlah_bayar_pajak;
     printf("Total sementara  : %d",total);

     if (tanggal < 21)
     {
        potongan=0.05*total; //potongan 5% setiap pembayaran pajak <tgl 21
        dibayar=total-potongan;
        total1=total1+dibayar;

        printf("\nTerdapat potongan 5%% setiap pembayaran pajak <tgl 21");
        printf("\nTotal potongan pajak : %d",potongan); //potongan 5%
        printf("\nTotal Denda : 0 ");

        printf("\nTotal Pajak yang harus dibayar : %d",total-potongan);

     }
     else if (tanggal >=21 )
     {
     potongan=0;

     printf("\nTerkena denda ketika telat bayar Rp.100.000",denda=100000);
     printf("\n=============================================================================================\n");

        dibayar=total-potongan;
        total1=total1+dibayar+denda;

     printf("\nTotal potongan pajak : %d",potongan); //potongannya 0
     printf("\nTerkena denda ketika membayar pajak >21");
     printf("\nTotal Denda Pajak : %d ",denda); //denda rp100.000
     printf("\nTotal Pajak yang harus dibayar : %d",dibayar+denda);


     }
       pajak++;//increment while



    }

     if (pajak>=5){
        ulang:
        printf("\n============================================================================================\n");
        printf("\t\t\t\t  BUKTI PEMBAYARAN YANG SAH\n");
        printf("\n\t\t\t     Pembayaran pajak atas nama : %s",id);
        printf("\n\n\t\t\tTOTAL KESELURUHAN PEMBAYARAN PAJAK   : Rp.%d \n",total1 );
     }

     printf("\n\n\t\t\tMasukkan uang untuk pembayaran pajak : Rp.");
     scanf("%d",&mbayar);

     if (mbayar >= total1){
        mbayar=mbayar-total1;
        printf("\n\t\t\tTotal kembalian yang terima          : Rp.%d  \n" , mbayar);

        printf("\n\t\t\t\t     Orang Bijak Taat Pajak\n");
        printf("\n\t\t\t   TERIMA KASIH SUDAH MEMBAYAR PAJAK YA GES YA\n");
        printf("\n=============================================================================================\n");
     }
     else{

     printf("\n\t\t\t\t  Mohon maaf uang kurang \n");
     goto ulang;

 }

 return 0;
}
