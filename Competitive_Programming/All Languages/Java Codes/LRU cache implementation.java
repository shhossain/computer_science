import java.util.Deque;  
import java.util.HashMap;  
import java.util.LinkedList;  
import java.util.Map;  
 class Cache   
{  
  int key;               
  String value;           
 Cache(int key, String value) {  
    this.key = key;  
    this.value = value;  
  }  
}  
 public class lru {  
 static Deque<Integer> q = new LinkedList<>();   
  static Map<Integer, Cache> map = new HashMap<>();  
  int CACHE_CAPACITY = 4;  
  public String getElementFromCache(int key)   
  {  
   if(map.containsKey(key))   
    {  
      Cache current = map.get(key);  
      q.remove(current.key);  
      q.addFirst(current.key);  
      return current.value;  
    }   
  return "Not exist";  
  }  
 public void putElementInCache(int key, String value)   
  {  
    if(map.containsKey(key))   
    {  
      Cache curr = map.get(key);      
      q.remove(curr.key);                   
    }  
    else   
    {  
      if(q.size() == CACHE_CAPACITY)   
      {  
        int temp = q.removeLast();    
        map.remove(temp);  
      }  
    }  
    Cache newItem = new Cache(key, value);  
    q.addFirst(newItem.key);     
    map.put(key, newItem);  
  }  
public static void main(String[] args)   
  {  
    lru cache = new lru();  
    cache.putElementInCache(1, "Value_1");  
    cache.putElementInCache(2, "Value_2");  
    cache.putElementInCache(3, "Value_3");  
    cache.putElementInCache(4, "Value_4");  
    System.out.println(cache.getElementFromCache(2));  
    System.out.println();    
    System.out.println(q);  
    System.out.println();  
    System.out.println(cache.getElementFromCache(5));  
    cache.putElementInCache(5,"Value_5");  
    System.out.println();  
    System.out.println(q);  
    System.out.println();  
   }  
 }  
/*
Code Explanation:

In the above code, we have imported the inbuilt Deque package and all other collection classes and created a class lru that has implemented the main() method.
A class Cache is implemented where we have declared two variables (key and value) where the key is for accessing the actual data and value is for cache to access the data.
Next, by creating a constructor for the Cache class, we have set the values for both variables.
Moving to the lru class, we declared a queue that acts as a Cache for storing data and a Map to store key-value pair of the data items. A variable CACHE_CAPACITY value is set as 4.
Next, implemented a method getElementFromCache(int key) where if the key already exists, fetch data from the cache. Inside it, if the item is present in the cache, remove it and add it on the front of the cache. If not, return that no such element exists.
Now, using the map, we checked if the element already exists in the cache, and for it, another method putELementCache(nt key, String value), has been implemented. Within it, if the element already exists in the cache, remove it. Else, if the size of the cache is full, then remove an element from the last of the queue. After that, just add the already existing element or the new element with the given key and value in the queue.
In the main() method, we have invoked the methods we have created in the main() method.

*/
