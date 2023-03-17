#include <iostream>
using namespace std;

int size;
int jumlah (int a, int b){
    return a + b;
}
int kurang (int c , int d){
    return c - d;
}
int sumArr(int arr[]){
    int y = 0;
    for (int x=0; x<5; x++ )
    {
        y=arr[x]+y;
    }
    return y;
}
float Rata(int arr[]){
    return sumArr(arr)/size;
}
int arr [5] = {1,3,4,5};


int main (){
    size = sizeof(arr)/sizeof(arr[0]);
    cout << "hasil dari penjumlahan adalah " << jumlah(3,2) << endl;
    cout <<  "hasiil dari pengurangan adalah" << kurang(6,2) << endl;
    cout << "hasil dari jumlah array adalah " << sumArr(arr) << endl;
    cout << "hasil rata rata dari jumlah array adalah" << Rata(arr) << endl;
}