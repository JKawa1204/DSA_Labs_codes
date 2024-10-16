import java.util.*;

class Node
{
    int coeff;
    int power;
    Node next;

    Node(int coeff,int power)
    {
        this.coeff = coeff;
        this.power=power;
        this.next = null;
    }
}

public class LinkedList
{
 
    Node head=null;

      public void insertend(int coeff, int power) {
        Node newNode = new Node(coeff, power);
        if (head == null) {
            head = newNode;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
        System.out.println("Inserted: " + coeff + "x^" + power);
    }

    public void display() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        Node temp = head;
        System.out.print("Polynomial: ");
        while (temp != null) {
            System.out.print(temp.coeff + "x^" + temp.power + (temp.next != null ? " + " : ""));
            temp = temp.next;
        }
        System.out.println();
    }
   
      public LinkedList add(LinkedList list1, LinkedList list2) {
        LinkedList result = new LinkedList();
        Node current1 = list1.head;
        Node current2 = list2.head;

        while (current1 != null || current2 != null) {
            if (current1 == null) {
                result.insertend(current2.coeff, current2.power);
                current2 = current2.next;
            } else if (current2 == null) {
                result.insertend(current1.coeff, current1.power);
                current1 = current1.next;
            } else if (current1.power == current2.power) {
                result.insertend(current1.coeff + current2.coeff, current1.power);
                current1 = current1.next;
                current2 = current2.next;
            } else if (current1.power > current2.power) {
                result.insertend(current1.coeff, current1.power);
                current1 = current1.next;
            } else {
                result.insertend(current2.coeff, current2.power);
                current2 = current2.next;
            }
        }
        return result;
    }

    public static void main(String[] args)
    {
        System.out.println("Jay and Janay");
        LinkedList list1 = new LinkedList();
        LinkedList list2 = new LinkedList();
        LinkedList list3 = new LinkedList();

        Scanner sc = new Scanner(System.in);
        while (true)
        {
            System.out.println("1. Insert in 1 \n2. Insert in 2\n3. Display\n4. Addition\n5. Exit\n");
            int choice = sc.nextInt();
            switch (choice)
            {
                case 1:
                    System.out.println("Enter value to insert:");
                    int value1 = sc.nextInt();
                    System.out.println("Enter power to insert:");
                    int value2 = sc.nextInt();
                    list1.insertend(value1,value2);
                    break;
               
                case 2:
                    System.out.println("Enter value to insert:");
                    value1 = sc.nextInt();
                    System.out.println("Enter power to insert:");
                    value2 = sc.nextInt();
                    list2.insertend(value1,value2);
                    break;
                   
                case 3:
                     System.out.println("First Polynomial :");
                     list1.display();
                     System.out.println("Second Polynomial :");
                     list2.display();
                     break;
                     
                case 4:
                    System.out.println("The addition of two polynomial is :");
                    list3 = list1.add(list1,list2);
                    list3.display();
                   
                case 5:
                    return;
            }
        }   
    }
}