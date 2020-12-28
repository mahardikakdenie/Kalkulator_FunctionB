#include <iostream>

using namespace std;

    float Hasil ; 

void Persegi(int a){
    
    Hasil = a * a ;
    cout<<"\nRumus Luas Persegi : "<<endl;
    cout<<" Sisi * Sisi "<<endl;
    cout<<a<<" * "<<a<<" = "<<Hasil <<endl;
    cout<<"Luas Persegi : " <<Hasil<<endl;  
}

void PersegiPanjang(int a ,int b){
    
    Hasil = a * b ;
    cout<<"\nRumus Luas Persegi Panjang : "<<endl;
    cout<<"Panjang * Lebar "<<endl;
    cout<< a << " * " << b <<" = "<<Hasil<<endl;
    cout<<"Luas Persegi Panjang : "<<Hasil<<endl;
}

void Lingkaran(int a){
    Hasil = 3.14 * a * a ;
    cout<<"\nRumus Luas Lingkaran : "<<endl;
    cout<<"phi * jari - jari * jari * jari "<<endl ;
    cout<<"3.14"<<" * "<<a<<" * "<<a<<" = "<<Hasil<<endl;
    cout<<"Luas Lingkaran : "<<Hasil<<endl;
}

void Trapesium(int a ,int b){
    Hasil = 0.5 * a * b ;
    cout<<"\nRumus Luas Trapesium : "<<endl;
    cout<<"0.5 * Janjang sisi sejajar * tinggi <<endl"<<endl;
    cout<<"0.5 "<<" * "<<a<<" * "<<b<<" = "<<Hasil<<endl;
    cout<<"Luas Trapesium : "<<Hasil<<endl;
}
void BelahKetupat(int a,int b){
    Hasil = 0.5 * a * b  ;
    cout<<"\nRumus Luas Belahketupat : "<<endl;
    cout<<"0.5 * Diagonal1 * Diagonal2 "<<endl;
    cout<<"0.5"<<" * "<<a<<" * "<<b<<" = "<<Hasil<<endl;
    cout<<"Luas BelahKetupat : "<<Hasil<<endl;

}

int main(int argc, char const *argv[])
{
    char Lagi ;
    do
    {
         MainMenu:
        system("cls");
        int value1,value2,pilih;
        cout<<"--------Kalkulator Bangun Datar ----------"<<endl;
        cout<<"1.Persegi "<<endl;
        cout<<"2.Persegi Panjang "<<endl;
        cout<<"3.Lingkaran "<<endl;
        cout<<"4.Trapesium "<<endl;
        cout<<"5.BelahKetupat"<<endl;
        cout<<"Pilih [ 1 / 2 / 3 / 4 / 5 ] : ";cin>>pilih ;
        if(pilih == 1){
            cout<<"\nMasukan Nilai Sisi : ";cin>>value1;
            Persegi(value1);
        }else if(pilih == 2){
            cout<<"\nMasukan Nilai Panjang : ";cin>>value1 ;
            cout<<"Masukan Nilai Lebar : ";cin>>value2 ;
            PersegiPanjang(value1,value2);
        }else if(pilih == 3){
            cout<<"\nMasukan Nilai Jari - Jari : ";cin>>value1;
            Lingkaran(value1);
        }else if(pilih == 4){
            cout<<"\nMasukan Nilai Panjang Sisi Sejajar : ";cin>>value1;
            cout<<"Masukan Nilai Tinggi : ";cin>>value2;
            Trapesium(value1,value2);
        }else if(pilih == 5){
            cout<<"\nMasukan Nilai Panjang Diagonal1: ";cin>>value1;
            cout<<"Masukan Nilai Panjang Diagonal2 : ";cin>>value2;
            BelahKetupat(value1,value2);
        }else{
            goto MainMenu;
        }
        
        cout<<"Kembali Lagi [ Y / N ] : ";cin>>Lagi;
    }while(Lagi == 'y' || Lagi == 'Y');
    
   
}


   