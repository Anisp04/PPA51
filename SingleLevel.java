class Base 
{
    public int A,B;
    public Base()
    {
        System.out.println("Inside base Constructor");
    }
    public void fun()
    {
        System.out.println("Inside base fun");
    }

}
class Derived extends Base 
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Inside derived constructor");
    }
    public void gun()
    {
        System.out.println("Inside serived gun");
    }

}

class SingleLevel
{
    public static void main (String Arg[])
    {
        System.out.println("Inside Main Method");
        Derived dobj = new Derived();

        dobj.fun();
        dobj.gun();

    }
}