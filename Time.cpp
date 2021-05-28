#include<iostream>	
using namespace std;

int check(int n);

class time
{
	public  :
		int hrs;
		int min;
		int sec;
};

int main()
{
	time t;
	cout<<"Enter time: ";
	cout<<"\n  Hours?  ";
	cin>>t.hrs;
	cout<<"  Minutes?  ";
	cin>>t.min;
	cout<<"  Seconds?  ";
	cin>>t.sec;
	int h = t.hrs;
	int m = t.min;
	int s = t.sec;
	int second = 60 * 60 * h + 60 * m + s;
	if(h<10 && m<10 && s<10)
	cout<<"  The time is = 0"<<h<<":0"<<m<<":0"<<s;
	else if(h<10 && m<10 && s>=10)
	cout<<"  The time is = 0"<<h<<":0"<<m<<":"<<s;
	else if(h<10 && m>=10 && s<10)
	cout<<"  The time is = 0"<<h<<":"<<m<<":0"<<s;
	else if(h>=10 && m<10 && s<10)
	cout<<"  The time is = "<<h<<":0"<<m<<":0"<<s;
	else if(h>=10 && m>=10 && s<10)
	cout<<"  The time is = "<<h<<":"<<m<<":0"<<s;
	else if(h<10 && m>=10 && s>=10)
	cout<<"  The time is = 0"<<h<<":"<<m<<":"<<s;
	else if(h>=10 && m<10 && s>=10)
	cout<<"  The time is = "<<h<<":0"<<m<<":"<<s;
	else if(h>=10 && m>=10 && s>=10)
	cout<<"  The time is = "<<h<<":"<<m<<":"<<s;
	cout<<"\n  Time in total seconds: "<<second;
	return 0;
}

//Aditya <-Developer
