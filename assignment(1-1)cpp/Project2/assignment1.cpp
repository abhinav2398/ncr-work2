#include<iostream>
using namespace std;
class time
{
	int hours;
	int mins;
	int secs;

public:
	time()
	{
		hours=0;
		mins=0;
		secs=0;
}
	time(int a, int b, int c)
	{
		hours=a;
		mins=b;
		secs=c;
}
	void add(time t1, time t2)
	{
		secs=t1.secs+t2.secs;
		mins=secs/60;
		secs=secs%60;
		mins=mins+t1.mins+t2.mins;
		hours=mins/60;
		mins=mins%60;
		hours=hours+t1.hours+t2.hours;
}
void display ()
{
cout<<"time is"<<hours<<":"<<mins<<":"<<secs<<endl;
}
};
int main()
{
time t;
t.display();
time t1(12,30,59);
t1.display();
time t2(10, 30, 11);
t2.display();
time t3;
t3.add (t1,t2);
cout<<"sum is:";
t3.display();
getchar();
return 0;
}