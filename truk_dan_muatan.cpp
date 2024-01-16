#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//----kode di atas batas ini tidak boleh diganti atau ditambah----

map<int, map<int, int>> truk;

void bobot_maks(map<int, map<int, int>> truk){
 int maks_bobot = -1; // Inisialisasi maks_bobot dengan nilai yang tidak mungkin
    pair<int, int> posisi_maks;

    // Menggunakan iterator untuk mengakses elemen map
    for (auto it1 = truk.begin(); it1 != truk.end(); ++it1) {
        for (auto it2 = it1->second.begin(); it2 != it1->second.end(); ++it2) {
            // Melakukan sesuatu dengan nilai bobot pada posisi (it1->first, it2->first)
            int bobot = it2->second;
            // Contoh: Menampilkan bobot
            cout << "Bobot pada posisi (" << it1->first << ", " << it2->first << "): " << bobot << endl;

            // Memeriksa apakah bobot saat ini lebih besar dari maks_bobot
            if (bobot > maks_bobot) {
                maks_bobot = bobot;
                posisi_maks = {it1->first, it2->first};
            }
        }
    }

    // Menampilkan bobot maksimum dan posisi
    cout << "Bobot Maksimum: " << maks_bobot << " pada posisi (" << posisi_maks.first << ", " << posisi_maks.second << ")\n"


//CODE
}


int main(){
    // Contoh penggunaan fungsi bobot_maks
    truk[1][2] = 10;
    truk[2][3] = 15;
    truk[3][4] = 20;

    bobot_maks(truk);
return 0;
}
