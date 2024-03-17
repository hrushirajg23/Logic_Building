import java.util.*;

class UserDefined
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter your age: ");
        int iAge=sobj.nextInt();

        try
        {
            if(iAge<18)
            {
                AgeInvalid aobj = new AgeInvalid("Your age is below 18");
                throw aobj;
                //throw new AgeInvalid("Your age is below 18");
                
            }
            else
            {
                System.out.println("Login Successful  ");
            }
        }
        catch(AgeInvalid obj)
        {
            System.out.println("Inside catch block");
            System.out.println(obj);

        }
        
    }
}

class AgeInvalid extends Exception    //Exception is the root class
{
    public AgeInvalid(String str)
    {
        super(str);    // ithe AgeInvalid cha super i.e parent is Exception class;
        //This method passes str to the Exception constructor
    }
}

