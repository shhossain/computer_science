package algorithm;

public class SelectionSort<T extends Comparable<T>> {
    private T[] a;

    public SelectionSort(T[] b) {
        a = b;
    }

    public SelectionSort() {

    }

    public T[] sort() {
        return sort(a);
    }

    public T[] sort(T[] a) {
        for(int i=0;i<a.length-1;i++) {
            int min = i;
            for (int j = i+1;j<a.length;j++) {
                if(a[j].compareTo(a[min]) < 0) {
                    min = j;
                }
            }
            swap(a, min, i);
        }
        return a;
    }

    private void swap(T[] a, int i, int j) {
        T temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
