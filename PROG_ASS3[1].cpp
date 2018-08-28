/*
  NOLLY D. DOINOG
  BSCpE 2-1D
  CALCULATE THE NEEDED SPEED OF A CAR TO TRAVEL IN A GIVEN TIME AND DISTANCE
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
    int distance, time;
    float speed;

    cout<<"How far do want to travel?(kilometer): ";
    cin>>distance;
    cout<<"How many hour do you want to travel?(hour): ";
    cin>>time;
        speed=distance/time;
    cout<<"you need a speed of "<<speed<<" km/h";

    return 0;

}
