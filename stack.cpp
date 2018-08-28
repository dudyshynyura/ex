#include<iostream>

#define SIZE 5

using namespace std;

template <typename T> class STACK
{
    private:
        T num[SIZE];
        int top;
    public:
        STACK();    
        T push(T);
        T pop();
        int isEmpty();
        int isFull();
        void displayItems();
        T min();
};
template <typename T> STACK<T>::STACK(){
    top=-1;
}

template <typename T> T STACK<T>::min(){
  int i = top;
  T min = num[i];
  for(; i >= 0; --i){
      if(num[i] < min) min = num[i];
  }
  cout<< "Min: " << min << endl;
}

template <typename T> int STACK<T>::isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}

template <typename T> int STACK<T>::isFull(){
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}

template <typename T> T STACK<T>::push(T n){
    if(isFull()){
        return 0;
    }
    ++top;
    num[top]=n;
    return n;
}

template <typename T> T STACK<T>::pop(){
    T temp;
    if(isEmpty())
        return 0;
    temp=num[top];
    --top;
    return temp;

}

template <typename T> void STACK<T>::displayItems(){
    T i;
    cout<<"STACK is: ";
    for(i=(top); i>=0; i--)
        cout<<num[i]<<" ";
    cout<<endl;
}

int main(){
    STACK<int> stk;
    int choice, n,temp;

    do
    {
        cout<<endl;
        cout<<"0 - Exit."<<endl;
        cout<<"1 - Push Item."<<endl;
        cout<<"2 - Pop Item."<<endl;
        cout<<"3 - Display Items (Print STACK)."<<endl;
        cout <<"4 - min" << endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 0: break;

            case 1:
                cout<<"Enter item to insert: ";
                cin>>n;
                temp=stk.push(n);
                if(temp==0)
                    cout<<"STACK is FULL."<<endl;
                else
                    cout<<temp<<" inserted."<<endl;
            break;

            case 2:
                temp=stk.pop();
                if(temp==0)
                    cout<<"STACK IS EMPTY."<<endl;
                else
                    cout<<temp<<" is removed (popped)."<<endl;
            break;

            case 3:
                stk.displayItems();
                break;
            case 4:
                stk.min();
                break;
            default:
                cout<<"An Invalid choice."<<endl;
        }
    }while(choice!=0);


    return 0;

}
