# Programming Projects

Repository ini berisi dua project pemrograman yang dibuat untuk melatih kemampuan dalam memahami algoritma, logika pemrograman, penggunaan perulangan, percabangan, serta pengolahan data menggunakan C++.

## Project 1 — Astronaut Elimination

Project pertama merupakan program simulasi eliminasi astronot. Program menerima jumlah astronot (`N`) dan posisi awal (`K`), kemudian melakukan eliminasi secara berulang hingga hanya tersisa satu astronot.

Pada setiap proses eliminasi, program memeriksa apakah nomor astronot yang dieliminasi merupakan bilangan genap atau ganjil. Jika genap, nilai `K` ditambah 2, sedangkan jika ganjil, nilai `K` dikurangi 1. Program juga memastikan nilai `K` tidak berada di bawah batas tertentu sebelum melanjutkan proses berikutnya.

Proses tersebut terus berulang sampai hanya terdapat satu astronot yang tersisa. Astronot terakhir kemudian ditampilkan sebagai hasil akhir.

### Konsep yang digunakan:
- Input dan output
- Perulangan (`loop`)
- Percabangan (`if-else`)
- Operasi aritmatika
- Simulasi proses eliminasi

---

## Project 2 — Alien Language

Project kedua merupakan program untuk mengolah kata menggunakan aturan perubahan karakter berdasarkan posisi huruf dalam alfabet. Setiap karakter pada kata dikonversi menjadi nilai berdasarkan posisi alfabetnya, kemudian nilai tersebut diproses menggunakan nilai dari karakter sebelumnya.

Program menggunakan variabel `prev` untuk menyimpan nilai karakter sebelumnya. Nilai karakter saat ini (`cur`) kemudian dijumlahkan dengan `prev` untuk menghasilkan karakter baru. Jika hasil perhitungan melebihi 26, nilai tersebut dibatasi menjadi 26 sebelum dikonversi kembali menjadi karakter.

Program dapat memproses beberapa kata secara berulang dan akan menggabungkan hasil dari setiap kata. Setelah pengguna memilih untuk berhenti memasukkan kata, hasil akhir akan ditampilkan.

### Konsep yang digunakan:
- String dan karakter
- Perulangan (`for loop`)
- Percabangan (`if-else`)
- Konversi karakter ke nilai alfabet
- Pengolahan string
- Penggunaan nilai karakter sebelumnya (`prev`)

---

## Tujuan Project

Kedua project ini dibuat untuk melatih kemampuan dalam menerjemahkan suatu permasalahan menjadi algoritma dan kemudian mengimplementasikannya ke dalam program C++. Project ini juga membantu memahami bagaimana **flowchart dapat digunakan sebagai dasar dalam membuat struktur program**, terutama dalam penggunaan perulangan, percabangan, dan pengolahan data.
