#include <iostream>
using namespace std;
class MasukUniversitas {
 private: int uangPendaftaran,uangSemesterPertama, uangBangunan, totalBiaya;
public:
MasukUniversitas(){
    uangBangunan = 0;
    uangPendaftaran =0;
}


 // isi access modifier disini
 int uangPendaftaran;

 // isi daftar variable yang dibutuhkan di bawah ini
public:
void setuangPendaftaran(int i) { 
        uangPendaftaran = i;
    }
    string getuangPendaftaran(int i) { 
        return uangPendaftaran;
    }


 MasukUniversitas() {
 uangPendaftaran = 0;
 // isi nilai default variable yang dibutuhkan di bawah ini
 }
 virtual void namaJalurMasuk(string SNBT, string SNBP) { return; }
virtual void hitungTotalBiaya() const = 0;
virtual void tampilkanTotalBiaya() const = 0;
virtual void input() const = 0;
 // isi disini dengan fungsi virtual yang dibutuhkan
 void setUangPendaftaran(int nilai) {
 this->uangPendaftaran = nilai;
 }
 float getUangPendaftaran() {
 return uangPendaftaran;
 }
 void setuangPendaftaran(int i) { //set mrpkn function untuk mengisi
        uangPendaftaran = i;
    }
    string getuangPendaftaran(int i) { //get mrpkn funtion untuk menampilkan 
        return uangPendaftaran;
    }// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
 public :
 SNBT(int pUangpendaftaran):
        MasukUniversitas(pUangpendaftaran){
            cout << "uang pendafataran snbt\n" << endl;
        }
};// isi disini untuk melengkapi class SNBT

class SNBP : public MasukUniversitas {
  SNBP(int pUangpendaftaran):
        MasukUniversitas(pUangpendaftaran){
            cout << "uang pendafataran snbt\n" << endl;
        }// isi disini untuk melengkapi class SNBP
};
int main() {
 // isi disini untuk fungsi main
}