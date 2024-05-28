import java.util.Scanner;

public class seriesandcyclelength {
    public static void main(String args[]) {

        int N;

        int count;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the starting point for the sequence: ");

        N = sc.nextInt();
        while (N <= 0) {
            System.out.println("The starting point must be positive. Please re-enter the number: ");
            N = sc.nextInt();
        }
        count = 0;

        while (N != 1) {
            // for even no
            if (N % 2 == 0) {
                N = N / 2;
            }

            else {
                N = 3 * N + 1;
            }
            System.out.print(N + "\t");

            count = count + 1;
        }
        System.out.println();
        System.out.println("There are " + count + " terms in the sequence.");
    }
}