#include<iostream>
using namespace std;

template<class T>
class Array
{
    public:
    T *Arr;
    int Size;
    Array(int no)
    {
        Size = no;
        Arr = new T(Size);
    }
    ~Array()
    {
        delete[]Arr;
    }
    void Accept()
    {
        cout<<"Enter the elements\n";
        int iCnt = 0;
        for(iCnt = 0;iCnt<Size;iCnt++)
        {
            cin>>Arr[iCnt];
        }

        void display()
        {
            cout<<"Elements of Array are :\n";
            int iCnt = 0;
             for(iCnt = 0;iCnt<Size;iCnt++)
             {
                cout<<Arr[iCnt]<<"\n";
             }
            
        }
    }
}
int main()
{
    Array aobj(5);
    aobj.Accept();
    aobj.display();

}