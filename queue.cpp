#include <iostream>
using namespace std;

class Queue{
private:
    int front, rear, size;
    int* queue;   
public:
    Queue(int size){
        this->size=size;
        queue=new int[size];
        front=-1;
        rear=-1;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return rear==size-1;
    }
    void enqueue(int value){
        if(isFull()){
            cout << "queue is full " << value << endl;
            return;
        }
        if(isEmpty()){
            front = 0;
        }
        queue[++rear]=value;
        cout<<"enqueued: "<<value<<endl;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty! Cannot dequeue."<<endl;
            return -1;
        }
        int dequeuedValue = queue[front];
        if(front==rear){ 
            front=rear=-1;
        }else{
            front++;
        }
        cout<<"Dequeued: "<<dequeuedValue<<endl;
        return dequeuedValue;
    }
    void display(){
        if(isEmpty()){
            cout << "Queue is empty!" << endl;
            return;
        }
        cout<<"Queue elements: ";
        for(int i=front; i<=rear; i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    int size;
    cout << "Enter size of queue: ";
    cin >> size;
    Queue q(size);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}
