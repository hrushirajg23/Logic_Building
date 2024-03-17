class CommandLine
{
    public static void main(String arg[])
    {
        System.out.println("Number of command Line arguments are: "+arg.length);

        System.out.println("Command line arguments are : ");

        for(int i = 0; i < arg.length; i++)
        {
            System.out.println(arg[i]);
        }
    }
}

// javac CommandLine.java

// java CommandLine.java 11 21 51