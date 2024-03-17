//c++ madhe Demo obj manalo ki object tayar hota
//but in java to create a Demo obj=new DEmo() lihava lagta
//So java madhe nusta Demo obj lihila tar it is a reference to Demo object 


class Demo
{
    public int i,j;
}
class Program406
{
    public static void main(String arg[])
    {
        Demo obj=null;
        obj = new Demo();

        obj.i=11;
        obj.j=21;
    }
}