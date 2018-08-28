/*
*AUTHOR			<NOLLY D. DOINOG
*DATE			<JULY 27 2018>
*NAME			<GWA OF 1ST SEM(2018-2019) CALCULATOR>
*DESCRIPTION	<CALCULATES GWA>
*ARGUMENTS		<If he/she got above 2.5, otherwise mark "YOU FAILED TO CONTINUE STUDYING IN ENGINEERING COURSES">
*RETURN			<IF he/she got below 2.5, otherwise mark "YOU ARE QUALIFIED TO CONTINUE STUDYING IN ENGINEERING COURSES">
*CHANGE HISTORY <NOLLY D. DOINOG	07/27/2018		CALCULATES GWA>
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

	int main()
	{
		string COURSE,   s_NUMBER, n_SCHOOL, n_SECTION;
		int n_SUBJECT;

		cout<<"STUDENT NUMBER: ";
		cin>>s_NUMBER;
		cout<<"COURSE(acroname): ";
		cin>>COURSE;
		cout<<"SECTION: ";
		cin>>n_SECTION;
		cout<<"SCHOOL(school acroname): ";
		cin>>n_SCHOOL;
		cout<<"TOTAL NUMBER OF SUBJECT TAKEN:  ";
		cin>>n_SUBJECT;
		cout<<endl;





				if(n_SUBJECT>8)
					{

						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"NOTE: WE HAVE A MAXIMUM OF 8 SUBJECT FOR THIS SEMISTER, YOU HAVE EXCEED TO THE TOTAL SUBJECT.IT WILL BE AN ERROR IF YOU CONTINUE. "<<endl;
						cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;

						system	("pause");
						cout<<"\n";

					}

				else
					{
							if(n_SUBJECT<8)
								{
									cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
									cout<<"NOTE: WE HAVE A TOTAL OF 8 SUBJECT THIS SEMISTER, PUT 0 TO THE SUBJECT THAT YOU DONT HAVE. "<<endl;
									cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;
								}

							else
								{
									cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								}


									system ("pause");
									cout<<endl;


									float s_PHYSICS,s_PROGRAMMING,s_CALCULUS,s_MATH,s_HISTORY,s_PE,s_SOCIAL,s_ENGLISH,SUM_GRADES,GENERAL_AVERAGE;


									cout<<"				(NOTE: DONT USE A PERCENTAGE GRADE)\n\n";

									system("pause");

									cout<<"\n\n GRADE IN PHYSICS: ";
									cin>>s_PHYSICS;
									cout<<"GRADE IN PROGRAMMING: ";
									cin>>s_PROGRAMMING;
									cout<<"GRADE IN CALCULUS: ";
									cin>>s_CALCULUS;
									cout<<"GRADE IN DISCRETE MATH: ";
									cin>>s_MATH;
									cout<<"GRADE IN HISTORY: ";
									cin>>s_HISTORY;
									cout<<"GRADE IN PHYSICAL EDUCATION: ";
									cin>>s_PE;
									cout<<"GRADE IN SOCIOLOGY: ";
									cin>>s_SOCIAL;
									cout<<"GRADE IN ENGLISH: ";
									cin>>s_ENGLISH;
									cout<<"\n\n";


		//FOR EVALUATION OF GRADE

									SUM_GRADES=s_PHYSICS+s_PROGRAMMING+s_CALCULUS+s_MATH+s_HISTORY+s_PE+s_SOCIAL+s_ENGLISH;
									GENERAL_AVERAGE=SUM_GRADES/n_SUBJECT;

									system ("pause");
									cout<<"\n\n\n";

									cout<<"YOUR GENERAL AVERAGE IS "<<GENERAL_AVERAGE<<endl;
									cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;

										if(GENERAL_AVERAGE<2.5)
											{

												cout<<"\n CONGRATULATION YOU GOT A PASSING GRADE, YOU CAN CONtINUE TO STUDY IN ENGINEERING COURSES.\n\n ";

											}


										else
											{


												cout<<"\n SORRY YO GOT A LOW GRADE, YOU ARE NOT ALLOWED TO CONTINUE IN STUDYING ENGINEERING COURSE.\n\n ";


											}

									cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;

				}








			system ("pause");
			return 0;

	}

