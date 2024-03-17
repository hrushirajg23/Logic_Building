import javax.swing.*;
import java.awt.event.*;

class GUI7
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
        JFrame fobj=new JFrame(title);
        fobj.setSize(300,600);
                    //weight,height
        fobj.setVisible(true);
        
        JButton bobj=new JButton("Submit"); //button tayar hota
        fobj.add(bobj);
        
        fobj.addWindowListener(new MarvellousListener());
    }
}