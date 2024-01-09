import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int sum = 0;
		
		int caseNum = scan.nextInt();
		for (int i = 0; i < caseNum; i++) {
			sum = scan.nextInt() + scan.nextInt();
			System.out.println(sum);
		}
		
		scan.close();
	}
}