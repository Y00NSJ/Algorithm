import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		boolean[] stdList = new boolean [30];
		for (int i = 0; i < 28; i++) {
			int stdNum = scan.nextInt();
			stdList[stdNum - 1] = true;
		}

		for (int i = 0; i < 30; i++) {
			if (stdList[i] == false)
				System.out.println(i + 1);
		}
		scan.close();
	}
}
