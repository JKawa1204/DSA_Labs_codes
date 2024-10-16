import java.util.*;

public class Main 
{
        public static void main(String[] args)
        {
                Scanner sc = new Scanner(System.in);
                int a,check=0;
                System.out.println("Jay Kawa");
                System.out.println("Enter the number : ");
                a = sc.nextInt();
                
                    for(int i = 2; i <= a/2; i++)
                    {
                    if(a%i==0)
                    {
                         check++;
                    }
                    }

                    if(check>0)
                    {
                        System.out.println("Number is not prime.");
                    }
                    else
                    {
                        System.out.println("Number is prime.");
                    }
                    sc.close();
        }
}