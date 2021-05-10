class Jarray{
	public static void main(String []args) {
		int [][]a = new int[2][];
		a[0] = new int[3];
		a[1] = new int[5]; 
		int count = 0;
		for(int i=0;i<a.length;i++)
			for(int j=0; j<a[i].length;j++)
				a[i][j] = count++;
		System.out.println("Contents of 2d Jagged Array");
		for(int i=0;i<a.length;i++)
			for(int j=0; j<a[i].length;j++)
				System.out.print(a[i][j]+" ");
			System.out.println();
	}
}