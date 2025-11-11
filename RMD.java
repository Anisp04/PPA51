class Base 
{
    public int A,B;
      public void fun()
    {
        System.out.println("Inside Base Fun");
    }
     public void gun()
    {
        System.out.println("Inside Base gun");
    }
     public void sun()
    {
        System.out.println("Inside Base sun");
    }
     public void run()
    {
        System.out.println("Inside Base run");
    }
    

}
class Derived extends Base 
{
    public int X,Y;
   
    public void fun()
    {
        System.out.println("Inside derived fun");
    }
     public void sun()
    {
        System.out.println("Inside derived sun");
    }
     public void mun()
    {
        System.out.println("Inside derived mun");
    }
     public void bun()
    {
        System.out.println("Inside derived bun");
    }

}

class RMD
{
    public static void main (String Arg[])
    {
        Base bobj =  new Derived();
        bobj.fun();//Derived Fun
        bobj.gun();// Base gun
        bobj.sun();//Derived sun
        bobj.run();//Base run
        //bobj.mun();//Error
        //bobj.bun();//Error


    }
}

//Base bobj = new Base();  no casting
//Derived dobj = new Base(); no casting
//Base bobj new Derived();  upcasting
//Derived dobj = new Base(); down casting