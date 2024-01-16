#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//----kode di atas batas ini tidak boleh diganti atau ditambah----

map<int, map<int, int>> truk;

void bobot_maks(map<int, map<int, int>> truk){
// Menggunakan iterator untuk mengakses elemen map
    for (auto it1 = truk.begin(); it1 != truk.end(); ++it1) {
        for (auto it2 = it1->second.begin(); it2 != it1->second.end(); ++it2) {
            // Melakukan sesuatu dengan nilai bobot pada posisi (it1->first, it2->first)
            int bobot = it2->second;
            // Contoh: Menampilkan bobot
            cout << "Bobot pada posisi (" << it1->first << ", " << it2->first << "): " << bobot << endl;
        }
    }
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
