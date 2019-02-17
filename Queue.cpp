#include<iostream>


using namespace std;

int * queue = new int[10];
int first=0;
int last=0;

void enqueue(int data)
{
    queue[last++]=data;
}
void dequeue()
{
    first++;

}
void read()
{
    for(int i=first;i<last;i++)
    {
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    enqueue(10);enqueue(110);enqueue(1110);read();
    dequeue();dequeue();read();enqueue(110);read();
		return 0;
}
