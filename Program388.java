//Problems on Matrix
//ask user no of rows and columns and summation

import java.util.*;

class Program388
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,iCol=0;
        System.out.println("Enter the number of rows");   
        iRow=sobj.nextInt();
        System.out.println("Enter the number of Cols");   
        iCol=sobj.nextInt();
    
        Matrix mobj=new Matrix(iRow,iCol);
        int iRet=0;
        mobj.Accept();
        mobj.Display();
        
        }   
}

class Matrix
{
    public int Arr[][];

    public Matrix(int A,int B)
    {
        Arr=new int[A][B];
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