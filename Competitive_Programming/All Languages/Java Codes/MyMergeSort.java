package algorithm;

import java.util.ArrayList;
import java.util.List;

public class MyMergeSort<T extends Comparable<T>> {
    private T[] a;

    public MyMergeSort(T[] b) {
        this.a = b;
    }

    public MyMergeSort() {
    }

    public void merge_sort() {
        merge_sort(a, 0, a.length - 1);
    }
    public void merge_sort(T[] a) {
        merge_sort(a, 0, a.length);
    }

    public void merge_sort(T[] a, int left, int right) {
        if(left < right) {
           int mid = left + (right - left)/2;
           merge_sort(a, left, mid);
           merge_sort(a, mid + 1, right);
           merge(a, left, mid, right);
        }
    }

    private void merge(T[] a, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        List<T> l = new ArrayList<>();
        List<T> r = new ArrayList<>();

        for(int i=0;i<n1;i++) {
            l.add(a[left + i]);
        }
        for(int i=0;i<n2;i++) {
            r.add(a[mid + 1 + i]);
        }

        int k = left;
        int i = 0;
        int j = 0;

        while(i < n1 && j < n2) {
            if(l.get(i).compareTo(r.get(j)) <= 0) {
                a[k++] = l.get(i);
                i++;
            }else {
                a[k++] = r.get(j);
                j++;
            }
        }
        while(i < n1) {
            a[k++] = l.get(i);
            i++;
        }

        while(j < n2) {
            a[k++] = r.get(j);
            j++;
        }
    }
}
