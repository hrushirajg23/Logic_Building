//using hashmap

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
        int iCnt=0;
               // <key    , value>   
        HashMap <Character,Integer> hobj=new HashMap<>();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(hobj.containsKey(Arr[iCnt]))
            {
                Frequency=hobj.get(Arr[iCnt]);
                hobj.put(Arr[iCnt],Frequency+1);
            }
            else
            {
                hobj.put(Arr[iCnt],1);
            }
        }

        System.out.println(hobj);

       
    }
}