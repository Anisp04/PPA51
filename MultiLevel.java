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
        System.out.println("Inside derived gun");
    }

}
class Derivedx extends Derived
{
    public int P,Q;
    public Derivedx()
    {
        System.out.println("Inside derivedx constructor");
    }
    public void sun()
    {
        System.out.println("Inside derived sun");
    }




}

class MultiLevel
{
    public static void main (String Arg[])
    {
        System.out.println("Inside Main Method");
        Derivedx dobj = new Derivedx();

        dobj.fun();
        dobj.gun();
        dobj.sun();

    }
}