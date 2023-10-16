import  java.util.Scanner;

class Student
{
    int roll_number;
    double marks1;
    double marks2;
    double marks3;
}

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        Student ref = new Student();

        System.out.println("Enter the details of student : ");

        System.out.print("Roll number: ");
        ref.roll_number = sc.nextInt();

        System.out.print("Marks1: ");
        ref.marks1 = sc.nextInt();

        System.out.print("Marks1: ");
        ref.marks2 = sc.nextInt();

        System.out.print("Marks1: ");
        ref.marks2 = sc.nextInt();

        System.out.println("Roll number: " + ref.roll_number);
        System.out.println("Marks1: " + ref.marks1);
        System.out.println("Marks2: " + ref.marks2);
        System.out.println("Marks3: " + ref.marks3);

    }
}