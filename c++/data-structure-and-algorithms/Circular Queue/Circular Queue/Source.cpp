#include <iostream>
using namespace std;
struct Queue {
	double *data;
	int size;
	int Head, Tail;
	void initialize(int s) {
		size = s;
		data = new double[size];
		Head = Tail = 0;
	}
	void enqueue(double item) {
		if (isFull()) {
			cout << "\nQueue overflow\n";
			return;}
		data[Tail] = item;
			Tail =(Tail+1)%size;
			}
	void dequeue() {
		if (isEmpty()) {
			cout << "\n Queue underflow";
			return ;}
		Head =(Head+1)%size;
	}
	bool isEmpty() { return (Head == Tail); }
	bool isFull() { return (Tail+1)%size== Head; }
	void print() {
		if(!isEmpty()){
		for (int i=Head; i!=Tail;i=(i+1)%size)
			{
				cout << data[i] << "    ";
			}
			cout << endl;}	
				}
};
int main(){
	Queue q;
    q.initialize(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);			
	q.print();
	q.dequeue();
	q.dequeue();
	q.print();
    q.enqueue(5);
	q.enqueue(6);
	q.print();
	system("pause");
return 0;}