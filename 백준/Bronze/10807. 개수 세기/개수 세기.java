import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int size = scan.nextInt();
		int [] intArray = new int[size];
		for (int i = 0; i < size; i++) {
			intArray[i] = scan.nextInt();
		}
		int findInt = scan.nextInt();
		int answer = 0;
		for (int i = 0; i < size; i++) {
			if (intArray[i] == findInt)
				answer++;
		}
		System.out.println(answer);
		scan.close();
	}
}