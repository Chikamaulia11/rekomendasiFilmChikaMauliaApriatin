# Mini Proyek - Coding untuk Kakak Tingkat
## Identitas Mahasiswa
- Nama: Chika Maulia Apriatin
- NIM: 2403125
- Kelas: 2B
## Identitas Kakak Tingkat
- Nama: Astuti Solihatunnisa
- Angkatan: 22
- Program Studi: Pendidikan Sistem dan Teknologi Informasi
## Permintaan Program
> "Kakak ingin dibuatkan program rekomendasi film berdasarkan mood"
## Penjelasan Program
- Bahasa pemrograman yang digunakan: C
- Fitur utama:
 - Input mood 
 - Klasifikasi mood(memfiltrasi film berdasarkan emosional user)
 - Output list rekomendasi film berdasarkan genre
- Konsep yang digunakan:
 - Input/output
   Input: Mood 
   Outputnya: Genre dan judul film  
 - Variabel
   mood, input, senengGenre, senengFilms = menggunakan tipe char 
   i(indeks genre), j(indeks judul film dalam genre) = menggunakan tipe int 
 - If-else
   Untuk menentukan alur program berdasarkan input mood
 - Loop (perulangan)
   Menggunakan looping do-while karena looping akan berjalan terus sampai user mengetik 'oke'
   Looping for untuk mencetak list genre dan judul film di dalam genre. 
 - Fungsi
   Fungsi main untuk standar input dan output. Fungsi string yaitu strcmp untuk membandingkan dua string.
   Fungsi listRekomendasi yang di dalamnya ada looping, agar bisa dipanggil secara berulang di main() secara berulang tanpa menulis kode yang sama. 
 - Array
   Menggunakan array 2 dimensi(kumpulan genre film) dan 3 dimensi(judul film berdasarkan genre) untuk menyimpan data terstruktur seperti list genre dan list judul film. 
 
## Link Video Demo
https://youtu.be/uG7h3-iIpZY?si=mTPGrjaCSFaCE8_h 
