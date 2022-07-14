# include <iostream>
using namespace std;

void MERGING(float *A,int R,int LBA,float* B,int S,int LBB,float *C,int LBC)
{
    int NA=LBA,NB=LBB,PTR=LBC;
    int UBA=LBA+R-1,UBB=LBB+S-1;

    while(NA<=UBA && NB<=UBB)
    {
        if(A[NA]<B[NB])
        {
            C[PTR]=A[NA];
            NA=NA+1;
            PTR=PTR+1;
        }
        else
        {
            C[PTR]=B[NB];
            NB=NB+1;
            PTR=PTR+1;
        }
    }

    if(NA>UBA)
    {
        for(int i=0;i<=UBB-NB;i++)
        {
            C[PTR+i]=B[NB+i];
        }
    }
    else
    {
        for(int i=0;i<=UBA-NA;i++)
        {
            C[PTR+i]=A[NA+i];
        }

    }
}

void MERGE_PASS(float *A,int N,int L,float *B)
{
    int Q=N/(2*L);
    int S=2*L*Q;
    int R=N-S;
    int LB;

     for(int j= 1;j<=Q;j++)
    {
        LB=(2*j-2)*L;
        MERGING(A,L,LB,A,L,LB+L,B,LB);
    }

    if(R<=L)
    {
        for(int k=0;k<R;k++)
        {
            B[S+k]=A[S+k];
        }
    }
    else
    {
        MERGING(A,L,S,A,R-L,L+S,B,S);
    }
}

void MERGE_SORT(float *A,float *B,int N)
{
    int L=1;
    
    while(L<N)
    {
        MERGE_PASS(A,N,L,B);
        MERGE_PASS(B,N,2*L,A);
        L=4*L;
    }

}

int main()
{
    int option,n,choice=1;
    float A[14]={66,33,40,22,55,88,60,11,80,20,50,44,77,30};
    float B[14];
    float *C;
    float *D;

    cout<<"    MERGE SORT "<<endl;
    cout<<"   "<<endl;
    while(choice==1)
    {
        cout<<"   Choose from the following options to continue"<<endl;
        cout<<"      1 : Enter a new array"<<endl;
        cout<<"      2 : Use a default array"<<endl;
        cout<<"   >>>";
        cin>>option;
        

        if(option==1)
        {
           cout<<"   Enter the number of elements in the array"<<endl;
           cout<<"   >>>";
           cin>>n; 

          C=new float[n];
          D=new float[n];
          cout<<"   >>>";
          for(int i=0;i<n;i++)
           {
               cin>>C[i];
           }

            cout<<"   Array after sorting : "<<endl;
            cout<<"   >>>";
            
            MERGE_SORT(C,D,n);
            
            if(float(n/2)==0)
            {
                for(int i=0;i<n-1;i++)
                {
                    cout<<C[i]<<", ";
                }
                cout<<C[n-1]<<endl;
            }
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    cout<<D[i]<<", ";
                }
                cout<<D[n-1]<<endl;

            }
        }
        
        else if(option==2)
        {
            n=14;
            cout<<"   Default array : "<<endl;
            cout<<"   >>>";
            for(int i=0;i<n-1;i++)
            {
                cout<<A[i]<<", ";
            }
            cout<<A[n-1]<<endl;
            cout<<"   Array after sorting : "<<endl;
            cout<<"   >>>";
            MERGE_SORT(A,B,n);
           if(float(n/2)==0)
            {
                for(int i=0;i<n-1;i++)
                {
                    cout<<A[i]<<", ";
                }
                cout<<A[n-1]<<endl;
            }
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    cout<<B[i]<<", ";
                }
                cout<<B[n-1]<<endl;

            }
        }
        
        

    }

    return 0;
}