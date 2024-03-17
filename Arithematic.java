package Marvellous;

public class Arithematic
{
    public int iValue1;
    public int iValue2;

    public Arithematic(int A,int B)
    {
        this.iValue1=A;
        this.iValue2=B;
    }

    public int Addition()
    {
        int iSum=0;
        iSum=this.iValue1+this.iValue2;
        return iSum;
    }
}