#include <iostream>
#include <string>
using namespace std;

float kmperjamkecmperdetik(float kmperjam) {
    return kmperjam * 100000 / 3600;
}

float kmperjamkemperdetik(float kmperjam) {
    return kmperjam * 1000 / 3600;
}

float kmperjamkemilperjam(float kmperjam) {
    return kmperjam * 0.621371;
}

float cmperdetikkekmperjam(float cmperdetik) {
    return cmperdetik / 100000 * 3600;
}

float cmperdetikkemperdetik(float cmperdetik) {
    return cmperdetik / 100;
}

float cmperdetikkemilperjam(float cmperdetik) {
    return cmperdetikkekmperjam(cmperdetik) * 0.621371;
}

float mperdetikkekmperjam(float mperdetik) {
    return mperdetik * 3600 / 1000;
}

float mperdetikkecmperdetik(float mperdetik) {
    return mperdetik * 100;
}

float mperdetikkemilperjam(float mperdetik) {
    return mperdetik * 2.23713;
}

float milperjamkekmperjam(float milperjam) {
    return milperjam * 1.60934;
}

float milperjamkecmperdetik(float milperjam) {
    return milperjamkekmperjam(milperjam) * 100000 / 3600;
}

float milperjamkemperdetik(float milperjam) {
    return milperjamkekmperjam(milperjam) * 1000 / 3600;
}

int main() {
    string nama, nim;
    const string nama_user = "Muhammad";
    const string nim_user = "2309106078";

    cout << "Selamat datang di Program Konversi Kecepatan" << endl;

    for (int coba_masuk = 0; coba_masuk < 3; ++coba_masuk) {
        cout << "Masukkan nama anda: ";
        cin >> nama;

        cout << "Masukkan NIM anda: ";
        cin >> nim;

        if (nama == nama_user && nim == nim_user) {
            cout << "Halo " << nama << ", Selamat datang!" << endl;
            break;
        }

        if (coba_masuk == 2) {
            cout << "Terlalu banyak percobaan gagal. Program akan keluar." << endl;
            return 0;
        }
        cout << "Nama atau NIM salah. Silakan coba lagi." << endl;
    }

    int pilihan;
    float kecepatan, hasil;

    while (true) {
        cout << "\nPilih opsi:" << endl;
        cout << "1. Konversi Kilometer per jam ke (Centimeter per detik, Meter per detik, Mil per jam)" << endl;
        cout << "2. Konversi Centimeter per detik ke (Kilometer per jam, Meter per detik, Mil per jam)" << endl;
        cout << "3. Konversi Meter per detik ke (Kilometer per jam, Centimeter per detik, Mil per jam)" << endl;
        cout << "4. Konversi Mil per jam ke (Kilometer per jam, Centimeter per detik, Meter per detik)" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan anda (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan kecepatan dalam Kilometer per jam: ";
                cin >> kecepatan;

                hasil = kmperjamkecmperdetik(kecepatan);
                cout << kecepatan << " Kilometer per jam sama dengan: " << hasil << " Centimeter per detik" << endl;

                hasil = kmperjamkemperdetik(kecepatan);
                cout << kecepatan << " Kilometer per jam sama dengan: " << hasil << " Meter per detik" << endl;

                hasil = kmperjamkemilperjam(kecepatan);
                cout << kecepatan << " Kilometer per jam sama dengan: " << hasil << " Mil per jam" << endl;

                break;

            case 2:
                cout << "Masukkan kecepatan dalam Centimeter per detik: ";
                cin >> kecepatan;

                hasil = cmperdetikkekmperjam(kecepatan);
                cout << kecepatan << " Centimeter per detik sama dengan: " << hasil << " Kilometer per jam" << endl;

                hasil = cmperdetikkemperdetik(kecepatan);
                cout << kecepatan << " Centimeter per detik sama dengan: " << hasil << " Meter per detik" << endl;

                hasil = cmperdetikkemilperjam(kecepatan);
                cout << kecepatan << " Centimeter per detik sama dengan: " << hasil << " Mil per jam" << endl;

                break;

            case 3:
                cout << "Masukkan kecepatan dalam Meter per detik: ";
                cin >> kecepatan;

                hasil = mperdetikkekmperjam(kecepatan);
                cout << kecepatan << " Meter per detik sama dengan: " << hasil << " Kilometer per jam" << endl;

                hasil = mperdetikkecmperdetik(kecepatan);
                cout << kecepatan << " Meter per detik sama dengan: " << hasil << " Centimeter per detik" << endl;

                hasil = mperdetikkemilperjam(kecepatan);
                cout << kecepatan << " Meter per detik sama dengan: " << hasil << " Mil per jam" << endl;

                break;

            case 4:
                cout << "Masukkan kecepatan dalam Mil per jam: ";
                cin >> kecepatan;

                hasil = milperjamkekmperjam(kecepatan);
                cout << kecepatan << " Mil per jam sama dengan: " << hasil << " Kilometer per jam" << endl;

                hasil = milperjamkecmperdetik(kecepatan);
                cout << kecepatan << " Mil per jam sama dengan: " << hasil << " Centimeter per detik" << endl;

                hasil = milperjamkemperdetik(kecepatan);
                cout << kecepatan << " Mil per jam sama dengan: " << hasil << " Meter per detik" << endl;

                break;

            case 5:
                cout << "Terima kasih telah menggunakan Program Konversi Kecepatan. Sampai jumpa " << nama << "!" << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }
    return 0;
}

