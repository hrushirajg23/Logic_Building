//Problems on Matrix
//using inheritance imp for interview

import java.util.*;

class Program392
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,iCol=0;
        System.out.println("Enter the number of rows");   
        iRow=sobj.nextInt();
        System.out.println("Enter the number of Cols");   
        iCol=sobj.nextInt();
    
        MyMatrix mobj=new MyMatrix(iRow,iCol);
        int iRet=0;
        mobj.Accept();
        mobj.Display();
        iRet=mobj.Summation();
        System.out.println(iRet);

        mobj=null;  // good programming practice object cha vapar zhala ki tyala null assign karaycha
                    //indication to JVM i don't want that object

        System.gc();
    }   
}

class Matrix
{
    protected int Arr[][]; //100 rs fakt mulala dyeyche baki konala nahi

    public Matrix(int A,int B)
    {
        Arr=new int[A][B];
    }
    protected void finalize()  //finalize method nehmi protected aste
    {
        Arr=null;
    }
    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        int i=0,j=0;
        System.out.println("Enter the elements: ");
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
            System.out.println();
        }

    }
    public void Display()
    {
        int i=0,j=0;
        System.out.println("Entered elements are: ");
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A,int B)
    {
        super(A,B);     
    }
    public int Summation()
    {
        int iSum=0,i=0,j=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                iSum=iSum+Arr[i][j];
            }
        }
        return iSum;
    } 
}