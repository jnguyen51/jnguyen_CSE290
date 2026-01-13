#include <iostream>
using namespace std;

int find_max(int arr[]){
    int max = 0;

    for(int i = 0; i < 5; i++){
        if (arr[i] > max){
            max = arr[i];
        }

    }
    return max;
}

int main(){
    int arr[5] = {1, 2, 3 ,4 ,6};
    cout << endl << find_max(arr) << endl;
}