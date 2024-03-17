//using hashmap using for each loop
// also using 'Set' Data structure
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

        Set<Character> setobj=hobj.keySet();   
        
        for(char ch1: setobj)
        {
            System.out.println(ch1+" occurs "+hobj.get(ch1)+ " times");
        }
       
    }
}