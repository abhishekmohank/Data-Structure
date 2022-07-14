#include<iostream>
using namespace std;

void insert(int *data, int &n){
    int element, pos;

    cout<<"\n Enter the element and position to be inserted \n";
    cin>>element>>pos;

    pos = pos-1;

    for(int i=n-1; i>=pos; i--){
        
        data[i+1] = data[i];
    }
    

    data[pos] = element;

    n++;

}

void showArray(int *data, int n){
    cout<<"\nData : ";
    for(int i=0; i<n; i++)
        cout<<data[i]<<" ";
}

void deleteElement(int *data, int &n){
    int element, pos=-1;
    cout<<"Enter the element to delete : ";
    cin>>element;

    for(int i=0; i<n; i++){
        if(data[i] == element){
            pos =i;

            break;
        }
    }
    if(pos != -1){
        for(int i=pos; i<n; i++)
            data[i]=data[i+1];
        n--;
    }
    else
        cout<<"Item not found : ";
    cout<<"**"<<n;
}


int main(){

    int *data = new int[100];
    int n;

    cout<<"Enter the number of elements : ";
    cin>>n;

    cout<<"Enter the elements \n";
    for(int i=0; i<n; i++){
        cin>>data[i];
    }

    cout<<"Data : ";
    for(int i=0; i<n; i++){
        cout<<data[i]<<" ";
    }

    insert(data,n);

    showArray(data,n);

    deleteElement(data,n);

    showArray(data,n);

    return 0;
    
}