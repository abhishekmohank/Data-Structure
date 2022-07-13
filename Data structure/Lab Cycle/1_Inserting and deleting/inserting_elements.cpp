#include<iostream>
using namespace std;
void insert(int arr[],int elements_no, int insert_postion , int item )
{
    int new_no = elements_no-1;
    while(new_no>=insert_postion)
    {
        arr[new_no+1] = arr[new_no];
        new_no = new_no-1;
    }
    arr[insert_postion]=item;
    elements_no = elements_no+1;
    for(int i=0; i < elements_no; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int data[10]= {10,21,1,8,9,7,8,10,43,54};
    cout<<"Before fuction : "<<endl;
    for(int i=0;i<10;i++){
        cout<<data[i]<< " ";
    }

    cout<<endl<<"After function : "<<endl;
    insert(data,1,8,27) ;
    return 0;
}