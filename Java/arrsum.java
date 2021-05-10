import java.util.Scanner;
class arrsum{
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);
		int sum=0;
		int ar[]=new int[10];
		for(int i=0;i<=9;i++){
			System.out.print("Enter the "+(i+1)+" value:");
			ar[i] = s.nextInt();
			sum = sum + ar[i];
		}
		System.out.println("Sum of Elements of array is :"+sum);
		
	}
}