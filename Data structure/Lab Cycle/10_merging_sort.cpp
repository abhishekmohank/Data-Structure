#include<iostream>
using namespace std;

void merge(int arr1[],int element1,int lb1,int arr2[],int element2,int lb2,int final[],int lbFINAl)
{
   
    // int start1=lb1,start2=lb2,startFinal=lbFINAl;

    int upper1=lb1+element1-1,upper2=lb2+element2-1;

    while(lb1<=upper1 and lb2<=upper2)
    {
        if (lb1<lb2)
        {
            final[lbFINAL]=arr1[lb1];
            lb1+=1;
            lbFINAL+=1;
        }
        else
        {
            final[lbFINAL]=arr2[lb2];
            lb2+=1;
            lbFINAL+=1;
        }
    }
    if(lb1>upper1)
    {
        for(int i=0;i<upper2-lb2)
        {
            final[lbFINAl+i]=arr2[lb2+i];
        }
    }
    else
    {
        for(int i=0;i<upper1-lb1)
        {
            final[lbFINAl+i]=arr1[lb1+i];
        }
    }
}
void merge_pass()
int main()
{
    return 0;
}