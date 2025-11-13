#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>

using namespace std;

int main() {
    srand(time(0));     // Inisialisasi generator acak

    char mainLagi;

    do {
        system("cls");
        int angkaRahasia, tebakanUser;
        int batasAtas = 100;
        int nyawa = 3;
        char level;

        // Tampilan Menu
        cout << "==============================" << endl;
        cout << "      TEBAK ANGKA V1.0  " << endl;
        cout << "==============================" << endl;
        cout << "Pilih Level Kesulitan: " << endl;
        cout <<" [1] Easy (1-25, 10 nyawa)" << endl;
        cout <<" [2] Medium (1-50, 7 nyawa)" << endl;
        cout <<" [3] Hard (1-100, 5 nyawa)" << endl;
        cout << "Pilihan Anda: ";
        level = getch(); // --> Fitur Input tanpa Enter

        switch (level) {
            case '1':
                batasAtas = 25;
                nyawa = 10;
                break;
            case '2':
                batasAtas = 50;
                nyawa = 7;
                break;
            case '3':
                batasAtas = 100;
                nyawa = 5;
                break;
            default:
                cout << "\nPilihan tidak valid! Mulai ulang permainan." << endl;
                batasAtas = 50;
                nyawa = 7;
                getch();
                break; // Kembali ke awal loop do-while
        }
    }
}