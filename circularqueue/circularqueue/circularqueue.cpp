#include<iostream>
#define SIZE 5
using namespace std;
class queue
{
int arr[SIZE],FRONT=0,REAR=0;

public:
	queue()
	{
		FRONT=-1;
		REAR=-1;
}
	bool isFULL()
	{
		if(FRONT==0 && REAR==SIZE-1)
		{
		return true;
		}
		if(FRONT==REAR+1)
		{
		return true;
		}
		return false;
    }
	bool isEMPTY()
	{
		if(FRONT==-1)
		return true;
		else 
		return false;
    }
	void enqueue(int element)
	{
		if(isFULL())
		cout<<" QUEUE IS FULL\n";
		else
		{if(FRONT==-1)
		FRONT=0;
		REAR=(REAR+1)%SIZE;
		arr[REAR]=element;
		cout<<endl<<"Inserted->"<< element<<endl;
		}
    }
	int dequeue()
	{
		int element;
		if(isEMPTY())
		{
		cout<<" QUEUE IS EMPTY"<<endl;
		return (-1);
		}
		else
		{
		element=arr[FRONT];
		if (FRONT == REAR)
		{
        FRONT=-1;
		REAR=-1;
		}
		else
		{
			FRONT=(FRONT+1)%SIZE;
		}
		return element;
	}
	}
	void display()
	{
		int i;
		if (isEMPTY()) {
			cout << endl << "Empty Queue" << endl;
		}
		else
		{
			cout << "Front -> " << FRONT;
			cout << endl << "Items -> ";
			for (i = FRONT; i != REAR;i = (i + 1) % SIZE)
				cout << arr[i];
			cout << arr[i];
			cout << endl << "Rear -> " << REAR<<endl;
		}
	}
	};


	int main()
	{
		queue q;
		q.dequeue();
		q.enqueue(1);
		q.enqueue(2);
		q.enqueue(4);
		q.enqueue(6);
		q.enqueue(8);
		q.enqueue(10);
		q.display();

		int elem = q.dequeue();

		if (elem != -1)
			cout << endl << "Deleted Element is \n" << elem;

		q.display();
		q.enqueue(7);
		q.display();
		q.enqueue(8);
		system("pause");
		return 0;
	}
