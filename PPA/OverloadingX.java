class OverloadingX
{
    public static void main(String arg[])
    {
        Arithmetic aobj=new Arithmetic();
    
        int iRet=0;
        double dRet=0;

        iRet=aobj.Addition(10,11);
        System.out.println("Addition is :"+iRet);
        iRet=aobj.Addition(10,11,21);
        System.out.println("Addition is :"+iRet);
        dRet=aobj.Addition(10.8,11.7);
        System.out.println("Addition is :"+dRet);

        aobj.Addition(11,90.99);

        aobj.Addition(90.99,11);
    }
}

class Arithmetic 
{
    public int Addition(int A,int B)
    {
        return A+B;
    }
    public int Addition(int Z,int Y,int X)
    {
        return Z+Y+X;
    }
    public double Addition(double A,double B)
    {
        return A+B;
    }
    public void Addition(int A,double B)
    {
        System.out.println("Inside first Addition");
    }
    public void Addition(double A,int B)
    {
        System.out.println("Inside second Addition");
    }

    
}