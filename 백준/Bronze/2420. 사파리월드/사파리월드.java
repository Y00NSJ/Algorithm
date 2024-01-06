import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		long domA = scan.nextInt();
		long domB = scan.nextInt();
	
			System.out.println((domA > domB)? domA - domB : domB - domA);
		scan.close();
	}
}