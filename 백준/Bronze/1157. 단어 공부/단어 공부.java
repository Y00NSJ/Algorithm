import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int [] charArray = new int [26];
		int maxChar = 0;
		int maxCharIdx = -1;
		boolean isPlural = false;
		Scanner scan = new Scanner(System.in);
		String word = scan.next();
		word = word.toUpperCase();
		
		for (int i = 0; i < word.length(); i++) {
			int idx = word.charAt(i) - 'A';
			charArray[idx]++;
		}
		
		for (int i = 0; i < charArray.length; i++) {
			if (maxChar < charArray[i]) {
				maxChar = charArray[i];
				maxCharIdx = i;
			}
		}
		
		for (int i = 0; i < charArray.length; i++) {
			if (charArray[i] == maxChar && i != maxCharIdx)
				isPlural = true;
		}
		
		if (isPlural == true)
			System.out.println("?");
		else
			System.out.println((char)(maxCharIdx + 'A'));
		scan.close();
	}

}