#include <iostream>

using namespace std;



int tim = 0;
int main()
{
  int n,b[10],w[10],turnaround[10],tt =0,tw = 0;
  float avw,avt;
  cout<<"\n enter the no. processes";
  cin>>n;
  for (int i = 1; i<=n;i++)
  {
    cout<<"\n the burst time of "<<i<<" is";
    cin>>b[i];

  }
  for (int i = 1;i<= n;i++)
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
    cout<<"process "<<i<<"waiting = "<<w[i]<<"turnaround = "<<turnaround[i]<<endl;
    }

   cout<<"avg waiting time = "<<avw;
   cout<<"\n avg turnaround time = "<<avt;


}
