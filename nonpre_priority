#include <iostream>

using namespace std;

int main()
{
    int wt[10],bt[10],pr[10],p[10],tat[10],i,j,n,total = 0,pos,temp;
    float avg_wt,avg_tat;
    cout<<"\n Enter the size of process";
    cin>>n;
    cout<<"\n burst time and priority for each process";
    for(i =0;i<n;i++)
    {
        cout<<"\nburst time";
        cin>>bt[i];
        cout<<"\npriority";
        cin>>pr[i];
        p[i] = i+1;


    }
    for(i =0;i<n;i++)
    {
        pos = i;
        for(j = i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
            {
                pos = j;
            }
        }
        temp = pr[i];
        pr[i] = pr[pos];
        pr[pos] = temp;
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
        temp = p[i];
        p[i] = p[pos];
        p[pos] = temp;
    }
    wt[0] = 0;
    for(i = 1;i<n;i++)
    {

     wt[i] = 0;
    for(j = 0;j<i;j++)

    
        wt[i] += bt[j];
        total +=wt[i];

    
    }
    avg_wt = float(total/n);
    total = 0;
    cout<<"Process"<<"\t"<<"waiting time"<<"\t"<<"burst time"<<"\t"<<"turnaround timme\n";
    for(i = 0;i<n;i++)
    {
        tat[i] = wt[i]+bt[i];
        total += tat[i];

        cout<<p[i]<<"\t"<<wt[i]<<"\t \t"<<bt[i]<<"\t \t \t "<<tat[i];
        cout<<endl;
    }

    avg_tat = float(total/n);
    cout<<"\naverage waiting time is"<<avg_wt;
cout<<"\naverage turnaround time is"<<avg_tat;
    return 0;

}
