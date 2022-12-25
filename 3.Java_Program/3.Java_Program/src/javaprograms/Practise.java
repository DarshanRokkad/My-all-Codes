package javaprograms;

import java.util.Arrays;

class Practise
{
	public static void main(String[] args) {
        fun("Hello", "World");

        fun("Bikash", "Dipankar", "Ayush", "Aayush");

    }

    static void fun(String ... arr)  {
        Arrays.sort(arr);

        System.out.println(Arrays.toString(arr));
    }
}