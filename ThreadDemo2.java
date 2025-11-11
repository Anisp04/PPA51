class Demo extends ThreadDemo2
{
    public void  run()
    {
        System.out.println("Thread is running ");
    }
}
class ThreadDemo2
{
    public static void main(String A[])
    {
        System.out.println("Inside main Thread ");

        Demo dobj  = new Demo();
        Thread tobj = new Thread(dobj);

        tobj.start();

    }
}