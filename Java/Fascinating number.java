import java.util.*;
class fascinate
{
    public static void main(String args[])
    {
        Scanner I=new Scanner (System.in);
        String s;
        System.out.println("ENTER A NUMBER");
        int i = 0,x=I.nextInt(),v[]=new int[10];        
        s=Integer.toString((x*1))+Integer.toString((x*2))+Integer.toString((x*3));
        for(i=0;i<s.length();i++)
        {
                v[s.charAt(i)-'0']++;
        }
        for(i=1;i<10;i++)
        {
              if(v[i] != 1)
              {
                   break;
              }
        }
        if(i == 10)
              System.out.println(x+" IS FASCINATING NUMBER");
        else 
              System.out.println(x+" FASCINATING NUMBER");
        }
    }
