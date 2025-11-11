
class LoopDemo
{
    public static void main(String Arg[])
    {
        int i = 0;

        System.out.println("Output By using For Loop ");
        //   1   2    3
        for(i=1;i<=5;i++)
        {
            System.out.println(i);//4
        }

         System.out.println("Output By using While Loop ");
        i = 1;
        while(i<=5)
        {
            System.out.println(i);
            i++;
        }

        System.out.println("Output by Using DoWhile Loop");
        i = 1;
        do
        {
            System.out.println(i);
            i++;

        } while(i<=5);

        

    }

}