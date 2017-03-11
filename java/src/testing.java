
import java.io.* ;
import java.util.Scanner;
/**
 * Created by laxmikadariya on 1/20/17.
 */
public class testing {
    static public double readDouble() {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        try {
            return Double.parseDouble(in.readLine());
        } catch (IOException e) {
        }
        return 0.0;
    }

    public static void main(String args[]) {
        double amt;
        int result;

        Scanner scan = new Scanner(System.in);
        System.out.print("Please enter a dollar and cent amount (e.g., 123.45): ");
//        String S = scan.next();
        amt = scan.nextDouble();

        System.out.println("value of entered amount is " + amt);
        if (amt >= 100) {
            result = (int) amt / 100;
            System.out.println(result + "    100 dollar bill");
            amt = amt - result * 100;

        }

        if (amt >= 50) {
            result = (int) amt / 50;
            System.out.println(result + "    50 dollar bill");
            amt = amt - result * 50;

        }

        if (amt >= 20) {
            result = (int) amt / 20;
            System.out.println(result + "    20 dollar bill");
            amt = amt - result * 20;

        }

        if (amt >= 10) {
            result = (int) amt / 10;
            System.out.println(result + "    10 dollar bill");
            amt = amt - result * 10;

        }

        if (amt >= 1) {
            result = (int) amt / 1;
            System.out.println(result + "    1 dollar bill");
            amt = amt - result * 1;

        }

        if (amt < 1) {
            amt = amt * 100;
            if (amt >= 25) {
                result = (int) amt / 25;
                System.out.println(result + "    25 cent ");
                amt = amt - result * 25;

            }


        }
    }
}
