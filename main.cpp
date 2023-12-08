//https://github.com/Navid-Derakhshandeh
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

class S{
		private:
			double t,p1,p2,p3,w1,w2,w3,aw,ae,res;
		public:
			void fcfs(){
				cout<<"Please Enter the Start Time : ";
				
				cin>>t;
				
				cout<<"Please Enter the  First Process : ";
				
				cin>>p1;
				
				cout<<"Please Enter the Second Process : ";
				
				cin>>p2;
				
				cout<<"Please Enter the Third Process : ";
				
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
				cout<<"Average of Responding Time : "<<res<<"\n";
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
			cout<<"Please Enter the First Process : ";
			cin>>p1;
			cout<<"Please Enter the Second Process : ";
			cin>>p2;
			cout<<"Please Enter the Third Process : ";
			cin>>p3;
			
			
			w2 = q + p2;
			w3 = w2 + p3;
			res1 = w3 - q;
			aw = (res1 + q + w2) / 3;
			ae = (p1 + p2 + p3) / 3;
			res2 = ae + aw;
			
			cout<<"Average of Responding Time : "<<res2<<"\n";
			
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
			cout<<"Please Enter the First Process : ";
			cin>>p1;
			cout<<"Please Enter the Second Process : ";
			cin>>p2;
			cout<<"Please Enter the Third Process : ";
			cin>>p3;
			cout<<"Please Enter the Fourth Process : ";
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
			
			cout<<"Average of Responding Time : "<<res2<<"\n";
			
			cout<<"Average of waiting Time : "<<aw<<"\n";
			
			cout<<"Avergae of Execution time : "<<ae<<"\n";
						
		}
};
    int al();
	int Test();
	int Test1();
	
	int main(int c){
	while(1)
	{
	do
	{
		cout<<"\t 1 - FCFS \n";
		cout<<"\t 2 - Round Robin \n";
		cout<<"\t 3 - SJF \n";
		cin>>c;
	}  
	while((c!=1) && (c!=2) && (c!=3));
	 switch(c){
	 	case 1:al();break;
	 	case 2:Test();break;
	 	case 3:Test1();break;
	 	default:cout<<"End";
	 }
	}	
	 return 0;}
    int al(){
    	
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
