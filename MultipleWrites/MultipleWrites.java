import java.io.*;

public class MultipleWrites{
	public static void main(String[] args) throws IOException{
		long t1 = System.nanoTime();
		try(FileWriter crayon = new FileWriter("fic.txt")){
			for(int i = 0; i < 100000000 ; i++){			
				crayon.write('a');
			}
		}
		System.out.println((System.nanoTime() - t1)*1e-9);
		long t2 = System.nanoTime();		
		try(BufferedWriter writer = new BufferedWriter(new FileWriter("fic.txt"))){
			for(int i = 0; i < 100000000; i++){			
				writer.write('a');
			}
		}
		System.out.println((System.nanoTime() - t2)*1e-9);
		long t3 = System.nanoTime();
		try(FileReader liseuse = new FileReader("fic.txt")){
			liseuse.read();
		}
		System.out.println((System.nanoTime() - t3)*1e-9);
		long t4 = System.nanoTime();
		try(BufferedReader reader = new BufferedReader(new FileReader("fic.txt"))){
			reader.read();
		}
		System.out.println((System.nanoTime() - t4)*1e-9);

		File file = new File("fic.txt");
		file.delete();
	}


}
