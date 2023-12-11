//https://github.com/Navid-Derakhshandeh
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <bits/stdc++.h>
#include <cstdlib> 
#include <vector>

using namespace std;


class S{
		private:
			double t,p1,p2,p3,w1,w2,w3,aw,ae,res;
		public:
			void fcfs(){
				cout<<"Please Enter the  Start Time : ";
				
				cin>>t;
				
				cout<<"Please Enter the Arrival Time of First Process : ";
				
				cin>>p1;
				
				cout<<"Please Enter the Arrival Time of Second Process : ";
				
				cin>>p2;
				
				cout<<"Please Enter the Arrival Time of Third Process : ";
				
				cin>>p3;
				
				w1 = t + p1;
				w2 = w1 + p2;
				w3 = w2 + p3;
				
				aw = (t + p1 + w2) / 3;
				ae = (p1 + p2 + p3) / 3;
				res = aw + ae;
				
				cout<<" waiting time 1 equal by  : "<<w1<<"\n";
				cout<<" waiting time 2 equal by : "<<w2<<"\n";
				cout<<" waiting time 3 equal by : "<<w3<<"\n";
				
				cout<<" Average of waiting time equal by : "<<aw<<"\n";
				cout<<" Average of Execution time equal by : "<<ae<<"\n";
				cout<<"Average of Turn Around Time : "<<res<<"\n";
			}
		
	};
class R
{
	private:
		double t,p1,p2,p3,w1,w2,w3,q,res1,aw,ae,res2;
	public:
		void RR()
		{
			cout<<"Please Enter the Start Time : ";
			cin>>t;
			cout<<"Please Enter Quantum Timing : ";
			cin>>q;
			cout<<"Please Enter the Arrival Time of First Process : ";
			cin>>p1;
			cout<<"Please Enter the Arrival Time of Second Process : ";
			cin>>p2;
			cout<<"Please Enter the Arrival Time of Third Process : ";
			cin>>p3;
			
			
			w2 = q + p2;
			w3 = w2 + p3;
			res1 = w3 - q;
			aw = (res1 + q + w2) / 3;
			ae = (p1 + p2 + p3) / 3;
			res2 = ae + aw;
			
			cout<<"Average of Turn Around Time Time : "<<res2<<"\n";
			
			cout<<"Average of waiting Time : "<<aw<<"\n";
			
			cout<<"Avergae of Execution time : "<<ae<<"\n";
		}
};
class SJ
{
	private:
		double t,p1,p2,p3,p4,w1,w2,w3,w4,aw,ae,res2;
		
	public:
		void SJF()
		{
			cout<<"Please Enter the Start Time : ";
			cin>>t;
			cout<<"Please Enter the Arrival Time of First Process : ";
			cin>>p1;
			cout<<"Please Enter the Arrival Time of Second Process : ";
			cin>>p2;
			cout<<"Please Enter the Arrival Time of Third Process : ";
			cin>>p3;
			cout<<"Please Enter the Arrival Time of Fourth Process : ";
			cin>>p4;
			
			
			int values[] = {p1,p2,p3,p4};
    		int n = sizeof(values) / sizeof(values[0]);
			int number[4] = {};
    		
   		     sort(values, values + n);
    		for (int i = 0; i < n; ++i)
    		{
    			number[i] = values[i];	
			}
 			int a = number[0];
 			int b = number[1];
    		int c = number[2];
    		int d = number[3];
    		
			w1 = t + a;
			w2 = w1 + b;
			w3 = w2 + c;
			w4 = w3 + d;
			
			ae = (a + b + c + d) / 4;
			
			aw = (t + w1 + w2 + w3) /4;
			
			res2 = ae + aw;
			
			cout<<"Average of Turn Around Time : "<<res2<<"\n";
			
			cout<<"Average of waiting Time : "<<aw<<"\n";
			
			cout<<"Avergae of Execution time : "<<ae<<"\n";
						
		}
};

class SRT
{
	private:
		double t,bt1,bt2,bt3,bt4,AWT,ATAT,res0,res1,ct1,ct2,ct3,ct4,at1,at2,at3,at4,tat1,tat2,tat3,tat4,wt1,wt2,wt3,wt4;
		public:
			void sr()
			{
			cout<<"Please Enter the Start Time : ";
			cin>>t;
			cout<<"Please Enter the Arrival Time of First Process : ";
			cin>>at1;
			cout<<"Please Enter the Burst time of Fisrt Process : ";
			cin>>bt1;
			cout<<"Please Enter the Arriavl Timne of Second Process : ";
			cin>>at2;
			cout<<"Please Enter the  Burst time of Second Process : ";
			cin>>bt2;
			cout<<"Please Enter the Arrival Time of Third Process : ";
			cin>>at3;
			cout<<"Please Enter the Burst time of Third Process: ";
			cin>>bt3;
			cout<<"Please Enter the Arrival time of Fourth Process : ";
			cin>>at4;
			cout<<"Please Enter the  Burst time of Fourth Process: ";
			cin>>bt4;
			
			res0 = bt1 - 1;
			res1 = bt1 - res0;
			ct2 = res1 + bt2;
			ct4 = ct2 + bt4;
			ct1 = ct4 + res0;
			ct3 = ct1 + bt3;
			
			tat1 = ct1 - at1;
			tat2 = ct2 - at2;
			tat3 = ct3 - at3;
			tat4 = ct4 - at4;
			
			wt1 = tat1 - bt1;
			wt2 = tat2 - bt2;
			wt3 = tat3 - bt3;
			wt4 = tat4 - bt4;
			
			ATAT = (tat1 + tat2 + tat3 + tat4) / 4;
			AWT = (wt1 + wt2 + wt3 + wt4) / 4;
			
			
			
			cout<<"Average of Turn Around Time : "<<ATAT<<"\n";
			
			cout<<"Average of waiting Time : "<<AWT<<"\n";
			
			
			
			}
};
    int al();
	int Test();
	int Test1();
	int SRTF();
	
	int main(int c){
	while(1)
	{
	do
	{
		cout<<"\t 1 - FCFS \n";
		cout<<"\t 2 - Round Robin \n";
		cout<<"\t 3 - SJF \n";
		cout<<"\t 4 - SRTF \n";
		cin>>c;
	}  
	while((c!=1) && (c!=2) && (c!=3) && (c!=4));
	 switch(c){
	 	case 1:al();
		 break;
	 	case 2:Test();
		 break;
	 	case 3:Test1();
		 break;
		 case 4:SRTF();
		 break;
	 	default:cout<<"End";
	 }
	}	
	 return 0;}
	 
    int al()
	{	
	S object;
	object.fcfs();
	return 0;	
   }
   int Test(){
   	
   	R object1;
   	object1.RR();
   	return 0;
   }
   int Test1()
   {
   	SJ object2;
   	object2.SJF();
   	return 0;
   }
	int SRTF()
	{
		SRT object4;
		object4.sr();
		return 0;
	}
