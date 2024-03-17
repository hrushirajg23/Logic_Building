import java.awt.*;
import java.awt.event.*;

class GUI6
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj=new MarvellousFrame("Linus Torvalds");
    }
}

class MarvellousListener extends WindowAdapter  //has internally defined methods of Interface WindowsListener to avoid redefining them
{
    public void windowClosing(WindowEvent obj) //windowClosing overrides the windowClosing method defined in WindowsAdapter class
    {
        System.exit(0);
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
        
        Button bobj=new Button("Submit"); //button tayar hota
        fobj.add(bobj);
        
        fobj.addWindowListener(new MarvellousListener());
    }
}