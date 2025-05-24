#include <stdio.h>
#include <string.h> //Fungsi untuk memanipulasi string.

//Deklarasi
char mood[20]; //Array untuk menyimpan input mood dengan maksimal karakter 20 (19 karakter + 1 karakter null terminator).
char input[10]; 

// Data genre dan judul film sesuai genre per mood.
    char senangGenre[2][30] = {"Komedi", "Musikal"}; //Memiliki 2 elemen string untuk genre dan maksimal karakter 30. 
    char senangFilms[2][3][50] = {
                                {"1. The Most Beautiful Girl in the World", "2. Sekawan Limo", "3. Kang Mak From Pee Mak"},
                                {"1. Juliet & Romeo", "2. Plankton: The Movie", "3. In Your Dreams"} 
                            }; // 2 berarti 2 genre, untuk setiap genre memiliki 3 judul film dan maksismal judul film 50 karakter.
    char sedihGenre[2][30] = {"Drama", "Romance Tragis"};
    char sedihFilms[2][3][50] = {
                                {"1. Bila Esok Ibu Tiada", "2. 1 Kakak 7 Ponakan", "3. Women from Rote Island"},
                                {"1. Setetes Embun Cinta Niyala", "2. Layla Majnun", "3. Goodbye, Farewell"}
                           };
    char marahGenre[2][30] = {"Aksi", "Crime"};
    char marahFilms[2][3][50] = {
                                {"1. 13 Bom di Jakarta", "2. Foxtrot Six", "3. The Raid"},
                                {"1. Borderless Fog", "2. 24 Jam Bersama Gaspar", "3. The Shadow Strays"}
                            };
    char bosanGenre[2][30] = {"Horor", "Animasi"};
    char bosanFilms[2][3][50] = {
                                {"1. Siksa Kubur", "2. Jailangkung", "3. KKN di Desa Penari"},
                                {"1. Jumbo", "2. The Super Mario Bros Movie", "3. Inside Out 2"}
                            };

void listRekomendasi(char genre[2][30], char films[2][3][50]) { //listRekomendasi fungsi untuk menampilkan daftar genre dan judul film.
    for (int i = 0; i < 2; i++) //Jumlah iterasi untuk 2 genre.
        {printf("%s\n", genre[i]); //Menampilkan genre sesuai mood yang telah di inputan, i untuk genre.
             for (int j = 0; j < 3; j++) //Jumlah iterasi untuk 3 judul film. 
             {printf("%s\n", films[i][j]); //Menampilkan judul film sesuai dengan genre, j untuk judul film. 
             }
        }
}

int main(){

printf("==Program Rekomendasi Film Berdasarkan Mood==\n"); //Judul program yang akan dicetak.

//Menggunakan looping do-while sehingga menjalankan statement baru mengecek kondisinya.
do {
    printf("Masukkan mood Anda (senang/sedih/marah/bosan):"); //Menginput mood sesuai dengan perintah. 
    scanf("%s", &mood);
        //Input akan mengalami sesuai kondisional
        if(strcmp(mood, "senang") == 0) //Untuk membandingkan dua string, jika hasilnya 0, maka program mengeksekusi blok di dalam if.
         {listRekomendasi(senangGenre, senangFilms);} //Untuk memanggil fungsi listRekomendasi agar dijalankan
        else if(strcmp(mood, "sedih") == 0)
         {listRekomendasi(sedihGenre, sedihFilms);}
        else if(strcmp(mood, "marah") == 0)
         {listRekomendasi(marahGenre, marahFilms);}
        else if(strcmp(mood, "bosan") == 0)
         {listRekomendasi(bosanGenre, bosanFilms);}
        else
         {printf("Mood tidak valid. Coba lagi dengan pilihan (senang/sedih/marah/bosan):\n");} 
         //Jika user menampilkan mood selain yang diperintah, program akan meminta input ulang 

    printf("Ketik 'oke' untuk keluar, atau ketik 'lanjut' ketika mood berganti:\n");
    scanf("%s", input); //Jika user sudah mendapatkan rekomendasi yang diinginkan maka ketik 'oke' untuk keluar,, jika moodnya berubah ketik'lanjut' untuk menginput mood lagi.

} while(strcmp(input, "oke") != 0); //Looping akan terus berjalan sampai inputnya bukan 'oke', jika 'oke' program akan keluar.

printf("Terima kasih! Selamat menonton film pilihanmu\n"); //Program selesai/.

return 0;
    
}

