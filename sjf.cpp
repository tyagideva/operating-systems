#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int b[20],p[20],w[20],turnaround[20],i,j,n,total =0,temp,tw,tt,pos;
float avw,avt;
cout<<endl<<"enter the no of proceses";
cin>>n;
for ( i = 1;i<=n;i++)
{
  cout<<endl<<"enter the burst time for "<<i;
  cin>>b[i];
  p[i] = i;

}
for ( i = 1;i<= n;i++ )
{
  pos = i;

for (j = i+1;j<=n;j++)
{
  if(b[j]<b[pos])
  pos = j;
}
temp = b[i];
b[i] = b[pos];
b[pos] = temp;
temp = p[i];
p[i] = p[pos];
p[pos] = temp;
}int tim = 0;
 for (i = 1;i<= n;i++)
  {
  w[i] = tim;
  for (int j =1;j<=b[i];j++)
  {
    tim++;
    if(j == b[i])
    turnaround[i] = tim;

  }}
  for (int i = 1;i<=n;i++)
  {
    tw = tw + w[i];
   tt=tt+turnaround[i];
  }
  avw = (float)tw/n;
  avt=(float)tt/n;
  cout<<"\n waiting and turn around time ";
  cout<<"\n *****";
  for (int i =1;i<=n;i++)
  {
    cout<<"process "<<p[i]<<"waiting = "<<w[i]<<"turnaround = "<<turnaround[i]<<endl;
    }

   cout<<"avg waiting time = "<<avw;
   cout<<"\n avg turnaround time = "<<avt;


}
