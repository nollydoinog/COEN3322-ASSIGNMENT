#include <iostream>                 
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
       cout<<"5:00 am - 5:30 am ==> PRAYERTIME"<<endl;
       for (int y=0;y<1;y--)
       {
           cout<<"5:30 am - 6:30 am ==> LIGO`LIGO na "<<endl;
           for (int z=0;z<1;z--)
           {
                cout<<"6:30 am - 7:00 am ==> BREAKFAST"<<endl;
                for (int a=0;a<1;a--)
                    {
                        cout<<"7:00 am - 7:30 am ==> ON THE WAY TO SCHOOL"<<endl;
                    }
           }
       }
     }


  return 0;

}
