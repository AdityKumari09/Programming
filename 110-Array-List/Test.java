import java.util.Scanner;
import java.util.ArrayList;

class Array_List_int
{
    int[] arr;
    int size;
    int capacity;

    Array_List_int()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    Array_List_int(int initial_capacity)
    {
        arr = new int[initial_capacity];
        size = 0;
        capacity = initial_capacity;
    }

    boolean is_empty()
    {
        return size == 0;
    }

    void add(int n)
    {
        arr[size] = n;
        ++size;
    }

    int get(int i)
    {
        if ((i < 0) || (i >= size))
            throw new IndexOutOfBoundException();

        return arr[i];    
    }

    int size()
    {
        return size;
    }

    void set(int i, int n)
    {
        if ((i < 0) || (i >= size))
            throw new IndexOutOfBoundException();

        arr[i] = n;    
    }

    void add(int i, int n)
    {
        if ((i < 0) || (i > size))
            throw new IndexOutOfBoundException();

        if (size == capacity)
        {
            capacity = capacity * 2;
            
        }    
    }
}

class Test
{
    public static void main(String[] args)
    {
        Array_List_int a1 = new Array_List_int();

        System.out.println("-------------------------------------------------");

        System.out.println(a1.is_empty());

        System.out.println("-------------------------------------------------");
        
        Array_List_int_add(10);
        Array_List_int_add(20);
        Array_List_int_add(30);

        //System.out.println(a1.get(1));

        System.out.println("-------------------------------------------------");

        System.out.println(a1.is_empty());
    }
}
