#include<iostream>
using namespace std;
int binary_search(int arr[],int low_bound,int up_bound,int item)
{
    int beg=low_bound,end=up_bound;
    int mid=(beg+end)/2;
    int loc;
    int i=0;
    cout<<"End = "<<end<<endl<<"Beg = "<<beg<<endl<<"mid = "<<mid<<endl;
    while(arr[mid]!=item and beg<=end){
        
        if(item>arr[mid]){
            beg=mid+1;
        }else{
            end=mid-1;
        }
        mid=(beg+end)/2;
        cout<<"End = "<<end<<endl<<"Beg = "<<beg<<endl<<"mid = "<<mid<<endl<<"arr[mid] = "<<arr[mid]<<endl;
        cout<<"=================\n"<<endl;
    }
    if(arr[mid]==item){
        loc=mid+1;
    }else{
        loc=-1;
    }
    return loc;
}
int main()
{
    int key;
    int array[12]={15,2,31,23,140,54,25,50,46,70,998,19};
    cout<<"Array : "<<endl;
    for(int i=0;i<12;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the number to be searched : ";
    cin>>key;
    if(binary_search(array,2,12,key)==-1){
        cout<<"The element "<<key<<" is not present in the array \n";
    }else{
        cout<<"The position of the searched element "<<key<<" : "<<binary_search(array,0,12,key);
    }
    return 0; 
} 