#include<iostream>


using namespace std;
int size=0;
int * stack = new int[size];

    //int stack[10];
    int index=0;

void push(int data)
{
    stack[index++]=data;
    size++;
    
    
}
void pop()
{
    index--;
    size--;
}
void read()
{
    for(int i=0;i<size;i++)
    {
        cout<<stack[i]<<endl;
    }
}
void peek()
{
    cout<<stack[size]<<endl;
}
int main()
{
  
		return 0;
}
