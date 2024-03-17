class InterfaceDemo1
{
    public static void main(String arg[])
    {

        PPA pobj=new PPA();

        System.out.println("Value of PI is: "+Circle.PI);
        //Circle.PI=9.0; //error as characteristics of interface are final

        float fRet=0.0f;

        fRet=pobj.Area(10.7f);
        System.out.println("Area is :"+fRet);

        fRet=pobj.Circumference(10.7f);
        System.out.println("Circumference is "+fRet);

    }
}

interface Circle
{
    float PI=3.14f;    //characteristics of interface are public,static and final
    float Area(float Radius); //
    float Circumference(float Radius);

}

class PPA implements Circle
{
    public float Area(float Radius)
    {
        return PI*Radius*Radius;
    }
    public float Circumference(float Radius)
    {
        return 2 * PI *Radius;
    }
}
