import java.awt.*;
import java.awt.event.*;

class GUI4
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj=new MarvellousFrame("Linus Torvalds");
    }
}

class MarvellousListener implements WindowListener
{
    public void windowDeactivated(WindowEvent obj){}
    public void windowActivated(WindowEvent obj){}
    public void windowDeiconified(WindowEvent obj){} 
    public void windowIconified(WindowEvent obj){} 
    public void windowClosed(WindowEvent obj){}
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
    public void windowOpened(WindowEvent obj){}
}

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        Frame fobj=new Frame(title);
        fobj.setSize(300,600);
                    //weight,height
        fobj.setVisible(true);
        fobj.addWindowListener(new MarvellousListener());
    }
}