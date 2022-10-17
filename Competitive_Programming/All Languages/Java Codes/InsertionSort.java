package algorithm;

public class InsertionSort<T extends Comparable<T>> {
    private T[] a;

    public InsertionSort(T[] b) {
        a = b;
    }

    public InsertionSort() {

    }

    public T[] sort() {
        return sort(a);
    }

    public T[] sort(T[] a) {
        for(int i=1;i<a.length;i++) {
            int j = i-1;
            T key = a[i];

            while((j >= 0) && (a[j].compareTo(key) > 0)) {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = key;
        }
        return a;
    }
}
