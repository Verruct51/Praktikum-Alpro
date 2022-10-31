#include<iostream>
using namespace std;

int main()
{
    int pilihan,nim;
    string nama,prodi;

    cout<<"Program Pemilihan Program Studi \n";
    cout<<"Departemen Elektronika \n";
    cout<<"Fakultas Teknik \n";
    cout<<"Universitas Negri Padang\n";
    cout<<"\n\n";

    cout<<"Silahkan masukkan nama anda = ";
    getline(cin,nama);
    cout<<"Silahkan masukkan NIM anda  = ";
    cin>>nim;
    cout<<"\n";
    cout<<"Pilihan prodi : \n";
    cout<<"1. Informatika NK \n";
    cout<<"2. Pendidikan Teknik Informatika \n";
    cout<<"3. Animasi \n";
    cout<<"4. TRSE \n";
    cout<<"5. Elektronika \n";

    cout<<"Silahkan Masukkan pilihan anda : ";
    cin>>pilihan;
    cout<<"\n";

    if (pilihan==1){
        cout<<"Nama  = "<<nama<<endl;
        cout<<"NIM   = "<<nim<<endl;
        cout<<"Prodi = Informatika NK "<<endl;
    }
    else if (pilihan==2){
        cout<<"Nama  = "<<nama<<endl;
        cout<<"NIM   = "<<nim<<endl;
        cout<<"Prodi = Pendidikan Teknik Informatika "<<endl;
    }
    else if (pilihan==3){
        cout<<"Nama  = "<<nama<<endl;
        cout<<"NIM   = "<<nim<<endl;
        cout<<"Prodi = Animasi "<<endl;
    }
    else if (pilihan==4){
        cout<<"Nama  = "<<nama<<endl;
        cout<<"NIM   = "<<nim<<endl;
        cout<<"Prodi = TRSE "<<endl;
    }
    else if (pilihan==5){
        cout<<"Nama  = "<<nama<<endl;
        cout<<"NIM   = "<<nim<<endl;
        cout<<"Prodi = Elektronika "<<endl;
    }
    else{
        cout<<"Prodi anda tidak tertera\n";
    }

}
