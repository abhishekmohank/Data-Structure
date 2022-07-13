#include<iostream>
using namespace std;
int pattern_matching(char text[],int text_no,char pattern[],int pat_no)
{
    int k=0,max=text_no-pat_no+1;
    int INDEX,l;
    while(k<=max)
    {
        for(l=0;l<pat_no;l++)
        {
            cout<<"pattern["<<l<<"] = "<<pattern[l]<<endl;
            cout<<"text["<<k+l<<"] = "<<text[k+l]<<endl<<endl;
            if(pattern[l]!=text[k+l])
            {
                break;
            }
            else
            {
                INDEX=k;
            }
        }
        if(l==pat_no)
        {
            return INDEX+1;
        }
        k=k+1;
    }
    return -1;
}
int main()
{
    char t[7]="bikes",p[3]="es";
    cout<<pattern_matching(t,6,p,2);
    return 0;
}