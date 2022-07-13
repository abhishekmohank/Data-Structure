#include<iostream>
using namespace std;
int* delete_element(int arr[],int no_element,int del_pos)
{
    while(del_pos<=no_element)
    {
        arr[del_pos-1]=arr[del_pos];
        del_pos=del_pos+1;
    }
    no_element=no_element-1;
    return arr;
}
void display_array(int arr[],int no_element)
{
    for(int i=0;i<no_element;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a [6]={7,3,1,6,2,9};
    cout<<"Before deletion : ";
    display_array(a,6);
    int *new_arr;
    cout<<"After deletion : ";
    new_arr=delete_element(a,6,1);
    display_array(new_arr,5);
    return 0;
}