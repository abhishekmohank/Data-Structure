#include<iostream>
#include<cstring>
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
void sub_delete(char text[],int text_no,char pattern[],int pat_no)
{
    int index=pattern_matching(text,text_no,pattern,pat_no);
    int final=text_no-pat_no;

    // cout<<"textNO = "<<text_no<<endl<<"final : "<<final<<endl;
    // cout<<"Index : "<<index<<endl;

    int times=1;
    int remaining=index+pat_no-1;
    int helper=text_no-(index+pat_no)+1;
    if (index==-1)
    {
        cout<<"There is no string like this in the main text "<<endl;
    }
    else
    {
        while(times<=helper)
        {
            cout<<"text["<<remaining<<"] : "<<text[remaining]<<"--------->"<<"text["<<index-1<<"] : "<<text[index-1]<<endl;
            text[index-1]=text[remaining];
            index+=1;
            remaining+=1;
            times+=1;
        }
        for(int i=0;i<final;i++)
        {
            cout<<text[i];
        }
    }

}
int main()
{
    char main[100],deleter[100];
    cout<<" Enter the main string : ";
    cin>>main;
    cout<<" Enter the substring : ";
    cin>>deleter;
    int main_len=strlen(main),del=strlen(deleter);
    sub_delete(main,main_len,deleter,del);
    return 0;
}