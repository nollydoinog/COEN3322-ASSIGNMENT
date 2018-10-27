#include <iostream>                 
#include <string>
using namespace std;

int main()
{
    char mchoose;
    cout<<"PRESS (S) - to start (E) - exit"<<endl;
    cin>>mchoose;

     while((mchoose!='S')&&(mchoose!='s')&&(mchoose!='E')&&(mchoose!='e'))
           {
              cout<<"(S) - to start (E) - exit"<<endl;
              cin>>mchoose;
           }

     int x,y,z;
     cout<<"MY DAILY ROUTINE"<<endl;
     
     for (int x=1;x<5;x++)
     {
       cout<<"5:00 - PRAYERTIME"<<endl;
     }


  return 0;

}
