#include<iostream>
using namespace std;

void insertionSort(int data[], int &n){

    for(int k=2; k<n; k++){
        int temp = data[k];
        int ptr = k - 1;

        while(temp < data[ptr]){
            data[ptr+1] = data[ptr];
            ptr = ptr - 1;
        }

        data[ptr+1] = temp;
    }

}


int main(){
    int m, n, data[n+1];
    cout<<"Enter the number of elements : ";
    cin>>m;
    n = m+1;
    cout<<"Enter the elements";
    data[0]=-9999;
    for(int i=1; i<n; i++)
        cin>>data[i];
    //int data[9] = {-9999, 32, 51, 27, 85, 66, 23, 13, 57};

    cout<<"DATA : ";
    for(int i=1; i<n; i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
    insertionSort(data,n);

    cout<<"\nSORTED DATA : ";
    for(int i=1; i<n; i++){
        cout<<data[i]<<" ";
    }

    return 0;
}