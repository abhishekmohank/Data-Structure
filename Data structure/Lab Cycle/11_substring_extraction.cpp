#include<iostream>
using namespace std;
void substring_extraction(char string[],int position,int sub_len)
{ 
    char sub_string[sub_len+1];
    int count=0;
    while(count<sub_len){
        sub_string[count]=string[position+count-1];
        count=count+1;
    }
    
    for(int i=0;i<count;i++)
    {
        cout<<sub_string[i];
    }
}
int main()
{
    char a[8]="English";
    substring_extraction(a,1,5);
    
    //The positons are of :- 1 2 3 4 .... 
    
    return 0;
}