import java.io.*;

class ExceptionDemo7
{
    public static void main(String A[])
    {
        try{
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter your name : ");
        String name = bobj.readLine();

        System.out.println("Enter your age : ");
        int age = Integer.parseInt(bobj.readLine());
        
        
        System.out.println("Yor name : "+name); 
        System.out.println("Yor age : "+age);
        }
        catch(Exception obj)
        {}
    }
}