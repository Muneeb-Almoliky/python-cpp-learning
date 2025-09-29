#include<iostream>
using namespace std;
struct Queue{
    int* data;
    int size;
    int head;
    int tail;
    
    Queue(int s){
        size=s;
        data=new int[size];
        head=tail=0;
    }
    bool isEmpty(){return head==tail;}
    bool isFull(){return (tail+1)%size==head;}
    void enqueue(int d){
        if(isFull()){
            cout<<"Queue is full!\n";
        }
        else{
        data[tail]=d;
        tail=(tail+1)%size;
        }
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty!\n";
            return;
        }
        head=(head+1)%size;
    }
    void print(){
        if(isEmpty()){
            cout<<"Queue is empty!\n";
            return;
        }
        cout<<"The array elements are : [ ";
        for(int i=head;i!=tail;i=(i+1)%size){
            cout<<data[i]<<" ";
        }
        cout<<"]"<<endl;

    }

};


int main(){
    Queue Q(5);
    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);
    Q.enqueue(4);
    Q.print();
    Q.enqueue(5);
    Q.print();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.print();
    Q.enqueue(6);
    Q.enqueue(7);
    Q.enqueue(8);
    Q.print();

  return 0;  
}



