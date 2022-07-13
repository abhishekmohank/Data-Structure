#include<iostream>
using namespace std;
int ternary_search(int arr[],int no_element,int key){
    int beg=0,end=no_element-1;
    int mid1,mid2;
    
    while (beg<=end){
        mid1=((end-beg)/3)+beg;
        mid2=2*((end-beg)/3)+beg;
     
        if(key==arr[mid1])
        {
            // cout<<"key==arr[mid1]"<<endl;

            return mid1;
        }
         else if(key==arr[mid2])
         {
            // cout<<"key==arr[mid2]"<<endl;

            return mid2;
        }
         else if(key<arr[mid1])
         {
            // cout<<"key<arr[mid1]"<<endl;

            end=mid1-1;
        }
         else if(key>arr[mid2])
         {
            // cout<<"key>arr[mid2]"<<endl;

            beg=mid2+1;
        }
         else if (key<arr[mid2] and key>arr[mid1])
         {
            // cout<<"key<arr[mid2] and key>arr[mid1]"<<endl;

            beg=mid1+1;
            end=mid2-1;
        } 

        // cout<<"arr["<<mid1<<"] : "<<arr[mid1]<<endl;
        // cout<<"arr["<<mid2<<"] : "<<arr[mid2]<<endl<<endl;

    }
    return -1;    
}
int main()
{
    int key=100,ternary;
    int array[12]={1,27,30,33,40,44,55,60,66,80,87,99};
    cout<<"Array : "<<endl;
    for(int i=0;i<12;i++){
        
        cout<<array[i]<<" ";
    }
    cout<<endl;
    ternary=ternary_search(array,12,key);
    if(ternary!=-1){
        cout<<key<<" is at " <<ternary+1<< "th position"  <<endl;
    }else{
        cout<<key<<" is not a part of the array\n";
    }
    
    return 0;
}