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
    do{
        if (element[mid] == x){
            cout << "Ditemukan"<<endl;
        }
        if (x < element[mid]){
            high = mid-1;
        }
        if (x>element[mid]){
            low = mid +1;
        }

    }while(low <= high);
    if (low > high){
        cout <<x<< "Tidak Ditemukan" << endl;
    }
}

int main(){


}