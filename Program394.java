//Problems on Matrix
//using inheritance imp for interview

//min in 2D array

import java.util.*;

class Program394
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
        iRet=mobj.Min();
        System.out.println("Smallest element in matrix is:"+iRet);

        mobj=null;  // good programming practice object cha vapar zhala ki tyala null assign karaycha
                    //indication to JVM i don't want that object

        System.gc();  //calling garbage collector explicitly
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
    public int Min()
    {
        int i=0,j=0;
        int min=Arr[0][0];
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]<min)
                {
                    min=Arr[i][j];
                }
            }
        }
        return min;
    } 
}