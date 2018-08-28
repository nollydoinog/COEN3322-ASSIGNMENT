//Title: General Average Computations
//Author: Nolly Doinog
//Purpose: Assignment in Programming


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string NAME;
    string YS;
    int N_Subject;
    float PE;
    float Math;
    float Physics;
    float English;
    float Calculus;
    float Social;
    float Programming;
    float History;
    float A_G;
    float S_G;


    cout<<"Student Number: ";
    cin>>NAME;
    cout<<"Course: ";
    cin>>NAME;
    cout<<"Year and Section: ";
    cin>>YS;
    cout<<"School: ";
    cin>>NAME;
    cout<<"No. of Subject: ";
    cin>>N_Subject;
    cout<<endl;

    if (N_Subject<8)
        {
        cout<<"----------------------------------------\n"<<endl;
          cout<<"Put 0 to the subject that you dont have\n"<<endl;
        cout<<"----------------------------------------\n"<<endl;

    }



    else{

     cout<<endl;
    }



    cout<<"Grade in Physics: ";
    cin>>Physics;
    cout<<"Grade in Calculus: ";
    cin>>Calculus;
    cout<<"Grade in Math: ";
    cin>>Math;
    cout<<"Grade in English: ";
    cin>>English;
    cout<<"Grade in Sosyolohiya: ";
    cin>>Social;
    cout<<"Grade in History: ";
    cin>>History;
    cout<<"Grade in P.E: ";
    cin>>PE;
    cout<<"Grade in Programming: ";
    cin>>Programming;
    cout<<"-------------------------\n\n";
    S_G= PE+Math+English+Social+History+Programming+Calculus+Physics;
    A_G=S_G/N_Subject;

    cout<<"Your General average is "<<A_G;
    cout<<"\n\n-------------------------\n\n"<<endl;

     if (A_G<=2.5){

        cout<<"🎉🎉🎉🎉Congratulations you are qualified to continue in Engineering Course";


    }

    else {

        cout<<" kindlly shift to other course";

     }

    return 0;
}
