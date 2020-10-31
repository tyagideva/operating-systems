#include <iostream>

using namespace std;

int main()
{
    int at[10],bt[10],rt[10];
    float atat,awt;
    int i,n,qt,remain,wt[10],tat[10];
    cout<<"Enter no. of process"<<endl;
    cin>>n;
    remain=n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter burst time of process "<<i+1<<endl;
        cin>>bt[i];
        cout<<"Enter arrival time of process "<<i+1<<endl;
        cin>>at[i];
        rt[i]=bt[i];
    }
    cout<<"Enter quantum time "<<endl;
    cin>>qt;
    int flag=0;
    for(int t=0,count=0;remain!=0;)
    {
        if(rt[count]<=qt&&rt[count]>0)
        {
            t=t+rt[count];
            rt[count]=0;
            flag=1;
        }
        else
        if(rt[count]>qt)
        {
            rt[count]=rt[count]-qt;
            t=t+qt;
        }
        if(rt[count]==0&&flag==1)
        {
            remain--;
            tat[count]=t-at[count];
            wt[count]=t-at[count]-bt[count];
            cout<<"Turnaround time of program "<<count+1<<" is "<<tat[count]<<" and waiting time is "<<wt[count]<<endl;
            flag=0;
        }
        if(count==n-1)
        {
            count=0;
        }
        else
        if(at[count+1]<=t)
        {
            count++;
        }
        else
        {
            count=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        atat=atat+tat[i];
        awt=awt+wt[i];
    }
    cout<<"Average turnaround time is "<<atat/n<<endl;
    cout<<"Average waiting time is "<<awt/n;
    return 0;
}
