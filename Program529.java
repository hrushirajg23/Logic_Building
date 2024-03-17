//using hashmap using for each loop

import java.util.*;

class Program507
{
    public static void main(String arg[])
    {
        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter a string ");
        String str=sobj.nextLine();
        
        str=str.replaceAll("\\s","");

        str=str.toLowerCase();

        char Arr[]=str.toCharArray();
        int Frequency=0;
        int iCnt=0;
               // <key    , value>   
        HashMap <Character,Integer> hobj=new HashMap<>();

        for(char ch:Arr)
        {
            if(hobj.containsKey(ch))
            {
                Frequency=hobj.get(ch);
                hobj.put(ch,Frequency+1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }

        System.out.println(hobj);

       
    }
}