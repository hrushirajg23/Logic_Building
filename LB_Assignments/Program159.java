//Accept String from user and check if it contains vowels in it
import java.util.*;

class Program159
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        boolean bRet=false;
        String str=null;
        System.out.println("Enter a string : ");
        str=sobj.nextLine();

        StringDemo dobj=new StringDemo(str);
        bRet=dobj.Chkvowel();

        if(bRet==true)
        {
            System.out.println("String contains Vowel ");
        }
        else
        {
            System.out.println("String doesn't contain Vowel");
        }
    }
}

class StringDemo
{
    public String str;
    public StringDemo(String x)
    {
        this.str=x;
    }

    public boolean Chkvowel()
    {
        boolean bFlag=false;
        char Arr[]=str.toCharArray();
        int iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]=='a') || (Arr[iCnt]=='e') || (Arr[iCnt]=='i')  || (Arr[iCnt]=='o') || (Arr[iCnt]=='u'))
            {
                bFlag=true;
            }
        }
        return bFlag;
    }

}