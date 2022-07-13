#include<iostream>
#include<cstring>
using namespace std;
void insert_substring(char text[],int text_no,char substring[],int sub_no,int position )
{
    int move_limiter=text_no+sub_no-1;
    int text_max=move_limiter;
    int count=0;
    int times=0;
    int spacer=text_no-position;

    // cout<<"Spacer : "<<spacer<<endl<<"move_limiters : "<<move_limiter<<endl;

    while(times<spacer)
    {
        // cout<<"text["<<text_no-1<<"] : "<<text[text_no-1]<<"--------->"<<"text["<<text_max<<"] : "<<text[text_max]<<endl;

        text[text_max]=text[text_no-1];
        text_no-=1;
        text_max-=1;
        times+=1;

        // for(int i=0;i<=move_limiter;i++){
        //     cout<<text[i];
        // }
        // cout<<endl;

    }
    
    while(count<sub_no)
    {
        text[position]=substring[count];
        position=position+1;
        count=count+1;

        // cout<<endl<<"The text :"<<endl;
        // for(int i=0;i<move_limiter;i++){
        //     cout<<text[i];
        // }

    }

    // cout<<endl;

    for(int i=0;i<=move_limiter;i++){
        cout<<text[i];
    }
}
int main()
{
    char main[100],sub_string[100];
    int main_length,sub_length,position;
    cout<<" Enter the main string : ";
    cin>>main;
    cout<<" Enter the substring : ";
    cin>>sub_string;
    main_length=strlen(main);
    sub_length=strlen(sub_string);
    cout<<"Enter the position to which you need to insert : ";
    cin>>position;
    insert_substring(main,main_length,sub_string,sub_length,position);
    
    return 0;
}