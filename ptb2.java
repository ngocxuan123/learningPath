package giaiPTB2;
import java.util.Scanner;
public class ptb2 {
	private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		System.out.println("Nhap a = ");
		int a = ptb2.scanner.nextInt();
		System.out.println("Nhap b = ");
		int b = ptb2.scanner.nextInt();
		System.out.println("Nhap c = ");
		int c = ptb2.scanner.nextInt();
		ptb2.PTB2(a, b, c);
	}
	public static void PTB2(int a, int b, int c) {
		if(a==0) {
			if(b==0) System.out.println("Phuong trinh vo nghiem.");
			else {
				System.out.println("Phuong trinh co 1 nghiem la " + (-c/b));
			}
		}else {
			float delta=b*b-4*a*c;
			if(delta<0) System.out.println("Phuong trinh vo nghiem.");
			else {
				if(delta==0) System.out.println("Phuong trinh co nghiem kep la " + (-b/2*a));
				else {
					System.out.println("Phuong trinh co 2 nghiem phan biet la : x1 = " + ((-b + Math.sqrt(delta))/2*a) + " va x2 = " + ((-b - Math.sqrt(delta))/2*a));
				}
			}
		}
	}
}
