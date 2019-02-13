#include<iostream>
using namespace std;
class student 
{
	char name[100];
	int m1,m2,m3;
	char grade[20];
	float average1;
public:

	student(const char name1[50])
	{
	strcpy_s(name,50,name1);
	
}
	void average(int m1,int m2,int m3)
	{
		average1=(m1+m2+m3)/3;
}
	void grade1()
	{
		if (average1>=60)
	    strcpy_s(grade,20,"FIRST CLASS");
		else if(50<=average1<60)
	    strcpy_s(grade,"SECOND CLASS");
		else if (40<=average1<50)
		strcpy_s(grade,20,"THIRD CLASS");
		else if (average1 < 40)
		strcpy_s(grade,20,"FAIL");
}
	void display()
	{
		cout<<"student name is:"<<name<<endl<<"average is:"<<average1<<endl<<"grade is:"<<grade<<endl;
}
};
int main()
{
student s1("Akshay");
s1.average(80,90,95);
s1.grade1();
cout<<"The details of the first student are:"<<endl;
s1.display();
student s2("Anthony");
s2.average(70,80,85);
s2.grade1();
cout<< "The details of the second student are:" << endl;
s2.display();
getchar();
return 0;
}