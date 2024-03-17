    //Problem Based on Strings

import java.util.*;

class Program255
{

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str=null;

        System.out.println("Enter your name: ");
        str=sobj.nextLine();

        System.out.println("Your name is : "+str);

        System.out.println("Length of name is: "+str.length());
        sobj.close();
    }
}


