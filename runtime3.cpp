#include<iostream>
using namespace std;
class base
{
    public:
       int i,j;

       virtual void fun()//1000
       {
        cout<<"Inside base fun\n";
       }
       void gun()//2000
       {
        cout<<"Inside base gun\n";
       }
       virtual void sun()//3000
       {
        cout<<"Inside base sun\n";
       }
       virtual void run()//4000
       {
        cout<<"Inside base run\n";
       }

};
class derived : public base
{
public:
    
int  x,y;

   virtual void fun()   //5000        //redefinition
   {
    cout<<"Inside derived fun\n";
   }
    void gun()//6000
   {
    cout<<"Inside derived gun\n";
   }
    virtual void mun()//7000
   {
    cout<<"Inside derived mun\n";
   }
   void run()
   {
    cout<<"Inside derived run\n";
   }
};
int main()
{
   cout<<"size of base class : "<<sizeof(base)<<"\n";
   cout<<"size of derived class : "<<sizeof(derived)<<"\n";


  
   derived dobj;

   base *bptr = NULL;

   bptr = &dobj;  //Upcasting
   
   bptr->fun();  //base fun
   bptr->gun();  //base gun
   bptr->sun();  //base sun
   bptr->run();  //base run
   //bptr->mun();  

  
   
   
  
   


   return 0; 
}