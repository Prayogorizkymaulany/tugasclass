#include <iostream>
#include <string>
using namespace std;

class buku {
    public:
        void jenisbuku(string buku);
        string judulbuku;
        void penerbitbuku(string penerbit);
        void hargabuku(int harga);
    
                
        };
    int main(){
    buku novel,komik,pelajaran; 

	novel.judulbuku	="Garis Waktu";
	komik.judulbuku ="One Piace ";
	pelajaran.judulbuku ="Kewarganegaraan ";
	
	
	cout << "=========== -BUKU - ==============\n";
	cout << "novel: \n";
	cout << (novel.judulbuku);
	novel.penerbitbuku("Fiersa Besari");
	novel.hargabuku( 80000 );
	cout <<"===================================\n";
	
	cout << "=========== -BUKU - ==============\n";
	cout << "komik: \n";
	cout << (komik.judulbuku);
	komik.penerbitbuku("Win Pisu");
	komik.hargabuku( 90000 );
	cout <<"===================================\n";
	
	cout << "=========== -BUKU - ==============\n";
	cout << "pelajaran: \n";
	cout << (pelajaran.judulbuku);
	pelajaran.penerbitbuku("Erlangga");
	pelajaran.hargabuku( 150000 );
	cout <<"===================================\n";
	
