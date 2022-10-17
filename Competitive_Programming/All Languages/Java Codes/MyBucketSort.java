package algorithm;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class MyBucketSort {
    public void sort(int[] a, int k) {
        int max = a[0];
        for(int i=1;i<a.length;i++) {
            if(a[i] > max) {
                max = a[i];
            }
        }
        max++;
        List<Integer>[] bucket = new List[k];
        for(int i=0;i<k;i++) {
            bucket[i] = new ArrayList<>();
        }

        for(int i=0;i<a.length;i++) {
            int ind = (k * a[i])/max;
            bucket[ind].add(a[i]);
        }
        for(int i=0;i<k;i++) {
            Collections.sort(bucket[i]);
        }

        int index = 0;
        for(int i=0;i<k;i++) {
            for(int j=0;j<bucket[i].size();j++) {
                a[index] = bucket[i].get(j);
                index++;
            }
        }
    }
}
