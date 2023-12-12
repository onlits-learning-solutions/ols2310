import java.util.Scanner;

class SelectionSort {
    public static void main(String[] args) {
        final int N = 10;
        int[] integers = new int[N];
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter 10 integers below:");
        
        for (int i = 0; i < N; i++) {
            integers[i] = scanner.nextInt();
        }
        
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (integers[i] > integers[j]) {
                    int t = integers[i];
                    integers[i] = integers[j];
                    integers[j] = t;
                }
            }
        }
        
        System.out.println("----------------------------");
        for(int i=0; i<N; i++)
        {
            System.out.println(integers[i]);
        }
    }
}