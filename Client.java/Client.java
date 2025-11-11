import java.net.*;
import java.io.*;

class Client
{
    public static void main(String Arg[] )throws Exception
    {
        System.out.println("Client Application is Running.....");




        Socket sobj = new Socket("localhost",2100);//request to Server 
        System.out.println("Connection Established With The Server..");

         PrintStream  ps = new PrintStream(sobj.getOutputStream());
         BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
         BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
         String str1, str2;

         System.out.println("Marvellous Chat Messenger chat Application Started..");
         while(!(str1=br2.readLine()).equals("end"))
         {
            ps.println(str1);
            str2 = br1.readLine();
            System.out.println("Enter The Message For Server : ");
            System.out.println("Server Says : "+str2);  
         }
         System.out.println("Thank you For using The Marvellous Chat Application..");
    }
}