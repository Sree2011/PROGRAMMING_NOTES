
import java.util.*;
public class inout {

    // Scanner class from java.util is used for input
    // println,printf and print from System.out are used for output
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       // integer variable
       int a = sc.nextInt();
       System.out.println(a);

       // double variable
       double d = sc.nextDouble();
       System.out.println(d);

       // character variable
       char c = sc.next().charAt(0);
       System.out.println(c);

       // float variable
       float f = sc.nextFloat();
       System.out.println(f);

       // short variable
       short s = sc.nextShort();
       System.out.println(s);


       // long variable
       long l = sc.nextLong();
       System.out.println(l);

       // byte variable
       byte b = sc.nextByte();
       System.out.println(b);

       // boolean variable
       Boolean b = sc.nextBoolean();
       System.out.println(b);

       // string variable
       String str = "hello";
       System.out.println(str);
    }
}
