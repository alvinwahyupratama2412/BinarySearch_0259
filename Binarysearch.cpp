#include <iostream>
using namespace std;

int element[10];
int npanjang;
int x;

void binarysearch(){
    cout <<"masukkan element yang ingin dicari = ";
    cin >> x;
    int low = 0;
    int high = npanjang-1;
    int mid = (low + high)/2;
    if (element[mid] == x){
        cout << "Ditemukan"<<endl;
    }
    
}

int main(){


}