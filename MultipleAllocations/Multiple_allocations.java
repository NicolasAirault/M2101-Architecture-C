public class Multiple_allocations{
	public static void main(String[] args){
		long t1 = System.nanoTime();
		int[] p = new int[100000000];
		System.out.println((System.nanoTime() - t1) *1e-9);
		long t2 = System.nanoTime();
		for(int i = 0; i < 100000000; i++){
			int[] p2 = new int[1];
		}
		System.out.println((System.nanoTime() - t2)*1e-9);
	}
}
