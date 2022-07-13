#include<iostream>
using namespace std;
void interpoltion_search(int data[],int n,int item)
{
    int beg=0;
    int end=n-1;
    int pos;
    int loc;
    while (beg<=end and item>=data[beg] and item<=data[end])
    {
        pos=beg+((item-data[beg])/(data[end]-data[beg]))*(end-beg);
        if(item==data[pos]){
            loc=pos;
            break;
        }else if(item>data[pos])
        {
            beg=pos+1;      
        }
        else
            loc=-1;

        pos++;
    }
    cout<<"The location of "<<item<<" : " <<loc<<endl;
}
int main()
{
    int num;
    int arr[18]={110,23,16,20,30,46,88,27,459,356,680,467,289,199,480,150,256,95};
    cout<<"Enter the number to be searched in the array : ";
    cin>>num;
    interpoltion_search(arr,18,num);
    return 0;
}