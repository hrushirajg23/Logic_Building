import java.io.*;

class WriteFile
{
    public static void main(String arg[])// throws Exception
    {
        try
        {
            String Data="Marvellous InfoSystems";
            byte Arr[]=Data.getBytes();  //char is 2 bytes so converting it to 1 bytes as file can read only 1 byte at a time
            FileOutputStream fobj=new FileOutputStream("PPA.txt");

            fobj.write(Arr);
        }
        catch(Exception obj)
        {}      
    }
}