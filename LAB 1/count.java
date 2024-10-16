import java.util.Scanner;

public class count {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;
        int chr=0,digits=0;
        System.out.println("Jay Kawa");
        System.out.println("Enter the string");
        str = sc.nextLine();

        for ( int i = 0 ; i < str.length();i++)
        {
            if(str.charAt(i)!=' ')
            {
                chr++;
            }
            if (str.charAt(i) >= 48 && str.charAt(i) <= 57)
            {
                digits++;
            }
        }
        int count = chr - digits;
        System.out.println("Digits = "+digits+"  Characters = " + count);
        sc.close();
    }
}
