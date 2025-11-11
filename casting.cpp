#include<iostream>
using namespace std;
class base
{
    public:
       int i,j;

       void fun()//definition
       {
        cout<<"Inside base fun\n";
       }

};
class derived : public base
{
public:
    
int  x,y;

   void fun()           //redefinition
   {
    cout<<"Inside derived fun\n";
   }
};
int main()
{
   cout<<sizeof(base)<<"\n";//1  byte

   base bobj;
   derived dobj;

   base *bptr = NULL;
   derived *dptr = NULL;

   bptr = &bobj;  //Nocasting
   dptr = &dobj;  //Nocasting
   bptr = &dobj;  //Upcasting
   dptr = &bobj;  // downcasting
   


   return 0; 
}