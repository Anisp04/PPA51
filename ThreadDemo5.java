class Demo extends ThreadDemo5
{
    public void  run()
    {
        System.out.println("Thread is running with name  "+Thread.currentThread().getName());
    }
}
class ThreadDemo5
{
    public static void main(String A[])
    {
        System.out.println("Inside main Thread ");

        Demo dobj1  = new Demo();
        Thread tobj1 = new Thread(dobj1);
        tobj1.setName("PPA");
        tobj1.start();

        Demo dobj2  = new Demo();
        Thread tobj2 = new Thread(dobj2);
        tobj2.setName("LB");
        tobj2.start();


    }
}