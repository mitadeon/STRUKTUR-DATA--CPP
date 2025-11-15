#include <iostream>
#include <string>
#include <windows.h>   // untuk Sleep()

using namespace std;

// =======================================================
// STRUCT NODE
// =======================================================
struct Node {
    string nama, gender;
    int nim;
    float nilai;
    Node *prev, *next;
};

// Head Linked List
Node *head = NULL;


// =======================================================
// INSERT DATA (TERURUT NIM)
// =======================================================
void insertData(const string &nama, int nim, const string &gender, float nilai) {
    cout << "\n>> INSERT DATA...\n";
    Sleep(800);

    Node *baru = new Node{nama, gender, nim, nilai, NULL, NULL};

    // Jika list kosong
    if (head == NULL) {
        head = baru;
        cout << ">> Linked List kosong → data menjadi HEAD.\n";
        return;
    }

    // Jika disisipkan di depan
    if (nim < head->nim) {
        cout << ">> NIM < HEAD → insert di depan.\n";
        baru->next = head;
        head->prev = baru;
        head = baru;
        return;
    }

    // Mencari posisi yang tepat
    Node *cur = head;
    while (cur->next != NULL && cur->next->nim < nim) {
        cout << "   Mencari posisi... lewat NIM " << cur->nim << "\n";
        Sleep(700);
        cur = cur->next;
    }

    // Sisip tengah atau akhir
    baru->next = cur->next;
    baru->prev = cur;

    if (cur->next != NULL)
        cur->next->prev = baru;

    cur->next = baru;

    cout << ">> Data berhasil disisipkan sesuai urutan.\n";
}


// =======================================================
// HAPUS DATA BERDASARKAN NIM
// =======================================================
void hapusData(int nim) {
    cout << "\n>> HAPUS DATA...\n";
    Sleep(800);

    if (head == NULL) {
        cout << ">> Linked List kosong!\n";
        return;
    }

    // Jika head yang dihapus
    if (head->nim == nim) {
        cout << ">> Data ada di HEAD → dihapus.\n";
        Node *hapus = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        delete hapus;
        return;
    }

    // Cari data
    Node *cur = head;
    while (cur != NULL && cur->nim != nim) {
        cout << "   Mencari... lewat NIM " << cur->nim << "\n";
        Sleep(700);
        cur = cur->next;
    }

    if (cur == NULL) {
        cout << ">> Data tidak ditemukan.\n";
        return;
    }

    // Hapus data
    cout << ">> Data ditemukan → dihapus.\n";

    if (cur->prev != NULL)
        cur->prev->next = cur->next;

    if (cur->next != NULL)
        cur->next->prev = cur->prev;

    delete cur;
}


// =======================================================
// CETAK DATA
// =======================================================
void cetakData() {
    cout << "\n>> CETAK DATA...\n";
    Sleep(800);

    if (head == NULL) {
        cout << ">> Linked List kosong!\n";
        return;
    }

    Node *cur = head;
    cout << "\n======================================================\n";
    cout << "         DAFTAR DATA MAHASISWA (TERURUT NIM)\n";
    cout << "======================================================\n";
    cout << "NIM\tNAMA\tGENDER\tNILAI\n";
    cout << "------------------------------------------------------\n";

    while (cur != NULL) {
        cout << cur->nim << "\t"
             << cur->nama << "\t"
             << cur->gender << "\t"
             << cur->nilai << endl;

        cur = cur->next;
        Sleep(400);
    }

    cout << "======================================================\n";
}


// =======================================================
// MENU
// =======================================================
void menu() {
    int pilihan;

    while (true) {
        cout << "\n\nLIN. DOUBLY LINKED LIST\n";
        cout << "==============================\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilihan (1–4) : ";
        cin >> pilihan;

        if (pilihan == 1) {
            string nama, gender;
            int nim;
            float nilai;

            cout << "\n=== INPUT DATA MAHASISWA ===\n";
            cout << "Nama   : "; cin >> nama;
            cout << "NIM    : "; cin >> nim;
            cout << "Gender : "; cin >> gender;
            cout << "Nilai  : "; cin >> nilai;
            insertData(nama,    nim, gender, nilai);
        } else if (pilihan == 2) {
            int nim;
            cout << "\n=== HAPUS DATA MAHASISWA ===\n";
            cout << "Masukkan NIM yang akan dihapus: ";
            cin >> nim;
            hapusData(nim);
        } else if (pilihan == 3) {
            cetakData();
        } else if (pilihan == 4) {
            cout << "\n>> EXIT PROGRAM. Terima kasih!\n";
            break;
        } else {
            cout << "\n>> Pilihan tidak valid! Silakan coba lagi.\n";
        }       
    }
}   