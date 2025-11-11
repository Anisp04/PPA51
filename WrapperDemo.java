class WrapperDemo
{
    public static void main(String Arg[])
    {
       int  No1 = 11;

       Integer No2 = 11;

       System.out.println(No1);
       System.out.println(No2);

       int X = No2;  //Auto UnBoxing
       System.out.println(X);

       Integer Y = No1; //Auto Boxing
       System.out.println(Y);
    }
}