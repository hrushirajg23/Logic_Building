import java.awt.*;

class GUI2
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj=new MarvellousFrame("Linus Torvalds");

    }
}

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        Frame fobj=new Frame(title);
        fobj.setSize(300,600);
                    //weight,height
        fobj.setVisible(true);
    }
}