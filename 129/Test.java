import java.util.Scanner;

class Stack_int
{
    private int[] arr;
    private int size;
    private int capacity;

    Stack_int()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    int size()
    {
        return size;
    }

    boolean is_empty()
    {
        return size == 0;
    }

    void push(int n)
    {
        if (size == capacity)
        {
            capacity = capacity * 2;
            
            int[] new_arr = new int[capacity];

            for (int i = 0; i < size; ++i)
            {
                new_arr[i] = arr[i];
            }

            arr = new_arr;
        }

        arr[size] = n;
        ++size;
    }

    int peek()
    {
        if (size == 0)
        {
            throw new IndexOutOfBoundsException();
        }

        return arr[size - 1];
    }

    void pop()
    {
        if (size == 0)
        {
            throw new IndexOutOfBoundsException();
        }

        --size;

        if (size < capacity / 2)
        {
            capacity = (size == 0) ? 1 : size;
            
            int[] new_arr = new int[capacity];

            for (int i = 0; i < size; ++i)
            {
                new_arr[i] = arr[i];
            }

            new_arr = arr;

        }
    }

    void clear()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    int[] to_array()
    {
        int[] new_arr = new int[size];

        for (int i = 0; i < size; ++i)
        {
            new_arr[i] = arr[size - 1 - i];
        }

        return new_arr;
    }

}

class Test
{
    public static void main(String[] args)
    {
        Stack_int a1 = new Stack_int();

        System.out.println("-------------------------------------------------");

        System.out.println(a1.is_empty());

        System.out.println("-------------------------------------------------");

        a1.push(10);
        a1.push(20);
        a1.push(30);
        a1.push(40);

        System.out.println(a1.peek());

        System.out.println("-------------------------------------------------");

        System.out.println(a1.is_empty());

        System.out.println(a1.size());

        System.out.println("-------------------------------------------------");

        a1.clear();

        System.out.println(a1.size());

        System.out.println("-------------------------------------------------");

        a1.push(10);
        a1.push(20);
        a1.push(30);
        a1.push(40);
        a1.push(50);
        a1.push(60);

        System.out.println(a1.peek());

        System.out.println("-------------------------------------------------");

        a1.pop();
        a1.pop();

        System.out.println(a1.peek());

        System.out.println("-------------------------------------------------");

        int [] array = a1.to_array();

        for (int i = 0; i < array.length; ++i)
        {
            System.out.print(array[i] + " ");
        }

        System.out.println();

        System.out.println("-------------------------------------------------");

        while(!(a1.is_empty()))
        {
            a1.pop();
        }

        System.out.println(a1.size());

        System.out.println("-------------------------------------------------");
    }
}