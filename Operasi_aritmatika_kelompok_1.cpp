#include <iostream>  // Header untuk inputan dan output program
#include <conio.h>   // header untuk fungsi getch
using namespace std; // Untuk menggunakan seluruh syntax atau kode program

void penambahan() //fungsi untuk penambahan
{
    int bilangan_1, bilangan_2, hasil; //variabel dan tipe data integer atau bilangan bulat
    //blok program penambahan
    cout << "=======================================" << endl;
    cout << "|     OPERASI PERHITUNGAN ARITMATIKA  |" << endl;
    cout << "|              KELOMPOK I             |" << endl;
    cout << "|             SHIBA  INU              |" << endl;
    cout << "|          (Operasi Penambahan)       |" << endl;
    cout << "=======================================" << endl;
    cout << "Masukan bilangan pertama : ";
    cin >> bilangan_1; //inputan untuk bilangan pertama
    cout << "Masukan bilangan kedua   : ";
    cin >> bilangan_2;                                      //inputan untuk bilangan kedua
    hasil = bilangan_1 + bilangan_2;                        //operasi penambahan
    cout << "hasil penambahannya adalah " << hasil << endl; //hasil
    cout << "=======================================" << endl;
    cout << "\n"
         << endl; //untuk membuat garis baru atau Tab
}

void pengurangan() //fungsi untuk pengurangan
{
    int bilangan_1, bilangan_2, hasil; //variabel dan tipe data integer atau bilangan bulat
    //blok progam pengurangan
    cout << "=======================================" << endl;
    cout << "|     OPERASI PERHITUNGAN ARITMATIKA  |" << endl;
    cout << "|              KELOMPOK I             |" << endl;
    cout << "|             SHIBA  INU              |" << endl;
    cout << "|         (Operasi Pengurangan)       |" << endl;
    cout << "=======================================" << endl;
    cout << "Masukan bilangan pertama : ";
    cin >> bilangan_1; //inputan untuk bilangan pertama
    cout << "Masukan bilangan kedua   : ";
    cin >> bilangan_2;                                       //inputan untuk bilangan kedua
    hasil = bilangan_1 - bilangan_2;                         //operasi pengurangan
    cout << "hasil pengurangannya adalah " << hasil << endl; //hasil
    cout << "=======================================" << endl;
    cout << "\n"
         << endl;
}

void perkalian() //fungsi untuk perkalian
{
    int bilangan_1, bilangan_2, hasil; //variabel dan tipe data integer atau bilangan bulat
    //blok program perkalian
    cout << "=======================================" << endl;
    cout << "|     OPERASI PERHITUNGAN ARITMATIKA  |" << endl;
    cout << "|              KELOMPOK I             |" << endl;
    cout << "|             SHIBA  INU              |" << endl;
    cout << "|          (Operasi Perkalian)        |" << endl;
    cout << "=======================================" << endl;
    cout << "Masukan bilangan pertama : ";
    cin >> bilangan_1; //inputan untuk bilangan pertama
    cout << "Masukan bilangan kedua   : ";
    cin >> bilangan_2;                                     //inputan untuk bilangan kedua
    hasil = bilangan_1 * bilangan_2;                       //operasi perkalian
    cout << "hasil perkaliannya adalah " << hasil << endl; //hasil
    cout << "=======================================" << endl;
    cout << "\n"
         << endl;
}

void pembagian() //fungsi untuk pembagian
{
    int bilangan_1, bilangan_2; //variabel dan tipe data integer atau bilangan bulat
    float hasil;                //variabel dan tipe data bilangan desimal
    //blok program pembagian
    cout << "=======================================" << endl;
    cout << "|     OPERASI PERHITUNGAN ARITMATIKA  |" << endl;
    cout << "|              KELOMPOK I             |" << endl;
    cout << "|              SHIBA  INU             |" << endl;
    cout << "|          (Operasi Pembagian)        |" << endl;
    cout << "=======================================" << endl;
    cout << "Masukan bilangan pertama : ";
    cin >> bilangan_1; //inputan untuk bilangan pertama
    cout << "Masukan bilangan kedua   : ";
    cin >> bilangan_2;                                     //inputan untuk bilangan kedua
    hasil = bilangan_1 / bilangan_2;                       //operasi pembagian
    cout << "hasil pembagiannya adalah " << hasil << endl; //hasil
    cout << "=======================================" << endl;
    cout << "\n"
         << endl;
}

void kelompok()
{
    //Menampilkan data kelompok
    cout << "=============================================" << endl;
    cout << "|            KELOMPOK I SHIBA INU           |" << endl;
    cout << "=============================================" << endl;
    cout << "KAKAK SP :  1. RIO GERARDI MUKE			  " << endl;
    cout << "         :  2. IPANDRI         			  " << endl;
    cout << "=============================================" << endl;
    cout << "KETUA    :  1.  MARTIN KARUNIA               " << endl;
    cout << "ANGGOTA  :  2.  FRIRA SESILIA                " << endl;
    cout << "         :  3.  APRILIA CHRISTYANA TRI ANGEL " << endl;
    cout << "         :  4.  RICHO ALBERT TIO             " << endl;
    cout << "         :  5.  RIPALDO ALYURA               " << endl;
    cout << "         :  6.  MIRNAWARTI                   " << endl;
    cout << "         :  7.  EVITA CAHYANI                " << endl;
    cout << "         :  8.  EVITA HANDAYANI              " << endl;
    cout << "         :  9.  MUHAMMAD FEBI HIDAYAT        " << endl;
    cout << "         :  10. JORDAN SETIAWAN NANYAN       " << endl;
    cout << "===========================================-" << endl;
}

int main() //program utama
{
    system("cls"); // Untuk membersihkan layar output
    int pilih;     // variabel pilih digunakan untuk memilih menu program
    char ulang;    // digunakan untuk mengulang instruksi
                   // menampilakan kalimat pada menu
    // perulangan yg digunakan pada menu
    do
    {
    // label ini digunakan untuk kembali ke  menu
    akhir:
        cout << "=======================================" << endl;
        cout << "|     OPERASI PERHITUNGAN ARITMATIKA  |" << endl;
        cout << "|              KELOMPOK I             |" << endl;
        cout << "|             (SHIBA  INU)            |" << endl;
        cout << "=======================================" << endl;
        cout << "[1]. Penambahan                        " << endl;
        cout << "[2]. Pengurangan                       " << endl;
        cout << "[3]. Perkalian                         " << endl;
        cout << "[4]. Pembagian                         " << endl;
        cout << "[5]. Data Kelompok                     " << endl;
        cout << "[0]. Keluar                            " << endl;
        cout << "=======================================" << endl;
        cout << "Masukan pilihan : ";
        cin >> pilih; //inputan pilihan
        cout << "\n";
    // label ini digunakan untuk kembali instruksi fungsi pada menu
    awal:
        switch (pilih) //Pemilihan swicth case
        {
        case 1: //Pilihan pertama untuk menjalankan fungsi penambahan ketika memasukan pilihan 1
            system("cls");
            penambahan(); //pemanggilan fungsi penambahan
            getch();
            break; //untuk memberhentikan jalannya suatu blok program

        case 2: //Pilihan kedua untuk menjalankan fungsi pengurangan ketika memasukan pilihan 2
            system("cls");
            pengurangan(); //pemanggilan fungsi pengurangan
            getch();
            break;

        case 3: //Pilihan ketiga untuk menjalankan fungsi perkalian ketika memasukan pilihan 3
            system("cls");
            perkalian(); //pemanggilan fungsi perkalian
            getch();
            break;

        case 4: //Pilihan keempat untuk menjalankan fungsi pembagian ketika memasukan pilihan 4
            system("cls");
            pembagian(); //pemanggilan fungsi pembagian
            getch();
            break;

        case 5:         //Pilihan kelima untuk menjalankan fungsi menampilkan data kelompok
            kelompok(); //pemanggilan fungsi
            getch();
            break;

        case 0: //Pilihan kelima untuk keluar dari program ketika memasukan pilihan 0 dan menampilkan output tulisan "terima kasih"
            cout << "\nterima kasih kakak^-^";
            getch();
            exit(0); //syntax keluar program
            break;

        default: //Ketika memasukan pilihan selain dari angka 1-5 maka akan menampilkan output berupa tulisan "Maaf masukan anda salah, coba lagi !!"
            cout << "Maaf masukan anda salah, coba lagi !!" << endl;
            getch();    //  Menahan output
            goto akhir; //kembali kemenu
        }
        // Menggulang kembali kemenu
        cout << "\nApakah Anda ingin mengulang?Tekan[y/t] : ";
        cin >> ulang; // variabel digunkan untuk kondisi untuk menggulang kemenu atau tidak
        cout << "\n\n";
        // kondisi jika kita ketik y atau Y, maka akan melakukan ini
        if (ulang == 'y' || ulang == 'Y')
        {
            goto awal; // yaitu kembali instruksi pada menu
        }
        // jika diketik t maka melakukan instruksi ini
        else
        {
            goto akhir; // yaitu masuk ke dalam menu
        }
    } while (pilih != 5); // kondisi do while yang dimana jika tidak sama dengan 5 maka akan melakukan perulangan, jika = 5 maka tidak mengulang

    return 0; // berfungsi untuk menjalankan program dan menampilkan output
}
