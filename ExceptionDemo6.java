import java.util.Scanner;


class AgeInvalidException extends Exception
{
    AgeInvalidException(String str)
    {
        super(str);
        System.out.println("Inside Constructor");
    }
}
class ExceptionDemo6
{
    public static void main(String A[])
    {
        int age = 0;
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your Age : ");
        age = sobj.nextInt();

        try{
            System.out.println("Inside try");
            if(age<18)
            {
                AgeInvalidException aobj = new AgeInvalidException("----------------------");
                throw aobj;
            }
        }
        catch(AgeInvalidException obj)
        {
            System.out.println("Inside catch");
            System.out.println(obj);
        }
        finally
        {
            System.out.println("Inside Finally");
        }
        System.out.println("End of Application");
    
}
}