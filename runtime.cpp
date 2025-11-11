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
       void gun()
       {
        cout<<"Inside base gun\n";
       }
       void sun()
       {
        cout<<"Inside base sun\n";
       }
       void run()
       {
        cout<<"Inside base run\n";
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
    void gun()
   {
    cout<<"Inside derived gun\n";
   }
    void sun()
   {
    cout<<"Inside derived sun\n";
   }

    void mun()
   {
    cout<<"Inside derived mun\n";
   }
};
int main()
{
   cout<<sizeof(base)<<"\n";//1  byte

  
   derived dobj;

   base *bptr = NULL;
   
   bptr->fun();  //base fun
   bptr->gun();  //base gun
   bptr->sun();  //base sun
   bptr->run();  //base run
   //bptr->mun();  

  
   
   bptr = &dobj;  //Upcasting
  
   


   return 0; 
}