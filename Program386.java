//Problems on Matrix
//ask user no of rows and columns and create a matrix

import java.util.*;

class Program386
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0,iCol=0;
        System.out.println("Enter the number of rows");   
        iRow=sobj.nextInt();
        System.out.println("Enter the number of Cols");   
        iCol=sobj.nextInt();
    
        int Arr[][]=new int[iRow][iCol];
        System.out.println("Enter the elements: ");

        int i=0,j=0;

       //   1     2     3 
        for(i=0;i<iRow;i++)
        {
            //   1     2     3
            for( j=0;j<iCol;j++)
            {
                Arr[i][j]=sobj.nextInt();  //4
            }
        }
        Matrix mobj=new Matrix();
        mobj.Display(Arr);

    }   
}

class Matrix
{
    public void Display(int Arr[][])
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