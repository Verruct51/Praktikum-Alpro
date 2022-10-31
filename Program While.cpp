#include<iostream>
using namespace std;

int main()
{
    int no=1, pilihan;
    cout<<"Program Perulangan While Do\n";
    cout<<"============================\n";
    cout<<"\n";
    cout<<"Ingin mengulang berapa kali ?? ";
    cin>>pilihan;
    cout<<"\n";
    do{
        cout<< no <<") Saya ingin menjadi programmer"<<endl;
        no++;

    }while (no<=pilihan);


}
