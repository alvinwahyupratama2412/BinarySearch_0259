#include <iostream>
using namespace std;

int element[10];
int npanjang;
int x;

void input() { //prosedur input
    while (true){
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> npanjang;
        if (npanjang <= 20){
            break;
        }
        else {
            cout << "\nAraay maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for(int i=0;i<npanjang;i++){
        cout << "Data ke-" << (i+1) << " = ";
        cin >> element[i];
    }
}

void bubbleSortArray(){
    int pass = 1; //step 1
   do{
    for (int j=0;j<=npanjang-1-pass;j++){ //step 2
        if(element[j]>element[j+1]){//step 3
            int temp;
            temp = element[j];
            element[j] = element[j+1];
            element[j+1] = temp;
        }
    }
    pass = pass +1; //step 4
   }while(pass <= npanjang-1); //step 5
    
}

void display(){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j=0;j<npanjang;j++){
        cout << element[j];
        if (j<npanjang-1) {
            cout << " --> ";
        }
    }
}

void binarysearch(){
    cout <<"\nmasukkan element yang ingin dicari = ";
    cin >> x;
    int low = 0;
    int high = npanjang-1;
    
    do{
        int mid = (low + high)/2;
        if (element[mid] == x){
            cout << "Ditemukan pada index "<< mid << endl;
            return;
        }
        if (x < element[mid]){
            high = mid-1;
        }
        if (x > element[mid]){
            low = mid +1;
        }
    }while(low <= high);
    if (low > high){
        cout <<x<< "Tidak Ditemukan" << endl;
    }
}

int main(){
input();
bubbleSortArray();
display();
binarysearch();
}