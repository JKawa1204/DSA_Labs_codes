import java.util.Scanner;

class Node 
{
    int data;
    Node next;

    public Node(int data) 
    {
        this.data = data;
        this.next = null;
    }
}

public class LinkedList 
{
    Node head = null;
    public void insertAtBeginning(int data) 
    {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
        System.out.println("Inserted " + data + " at the beginning");
    }

    public void insertAtEnd(int data) 
    {
        Node newNode = new Node(data);
        if (head == null)
         {
            head = newNode;
        } 
        else 
        {
            Node temp = head;
            while (temp.next != null) 
            {
                temp = temp.next;
            }
            temp.next = newNode;
        }
        System.out.println("Inserted " + data + " at the end");
    }

    public void insertAtPosition(int data, int position)
     {
        Node newNode = new Node(data);
        if (position == 1) 
        {
            newNode.next = head;
            head = newNode;
        } 
        else 
        {
            Node temp = head;
            int count = 1;
            while (temp != null && count < position - 1) 
            {
                temp = temp.next;
                count++;
            }
            if (temp == null) 
            {
                System.out.println("Position out of bounds");
            } 
            else 
            {
                newNode.next = temp.next;
                temp.next = newNode;
                System.out.println("Inserted " + data + " at position " + position);
            }
        }
    }

    public void deleteFirst() 
    {
        if (head == null) 
        {
            System.out.println("List is empty");
        } 
        else 
        {
            System.out.println("Deleted " + head.data + " from the beginning");
            head = head.next;
        }
    }

    public void deleteLast() 
    {
        if (head == null) 
        {
            System.out.println("List is empty");
        } 
        else if (head.next == null) 
        {
            System.out.println("Deleted " + head.data + " from the end");
            head = null;
        } 
        else 
        {
            Node temp = head;
            while (temp.next.next != null) 
            {
                temp = temp.next;
            }
            System.out.println("Deleted " + temp.next.data + " from the end");
            temp.next = null;
        }
    }

    public void deleteAtPosition(int position) 
    {
        if (head == null) 
        {
            System.out.println("List is empty");
        } 
        else if (position == 1) 
        {
            System.out.println("Deleted " + head.data + " from position " + position);
            head = head.next;
        } 
        else 
        {
            Node temp = head;
            int count = 1;
            while (temp != null && count < position - 1) 
            {
                temp = temp.next;
                count++;
            }
            if (temp == null || temp.next == null) 
            {
                System.out.println("Position out of bounds");
            } 
            else 
            {
                System.out.println("Deleted " + temp.next.data + " from position " + position);
                temp.next = temp.next.next;
            }
        }
    }

    public void display() 
    {
        if (head == null) 
        {
            System.out.println("List is empty");
        } 
        else 
        {
            Node temp = head;
            System.out.println("Elements in the list:");
            while (temp != null) 
            {
                System.out.print(temp.data + " -> ");
                temp = temp.next;
            }
            System.out.println("null");
        }
    }

    public static void main(String[] args) 
    {
        System.out.println("Jay and Janay");
        LinkedList list = new LinkedList();
        Scanner sc = new Scanner(System.in);

        while (true) 
        {
            System.out.println("1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n4. Delete First\n5. Delete Last\n6. Delete at Position\n7. Display\n8. Exit");
            int choice = sc.nextInt();
            switch (choice) 
            {
                case 1:
                    System.out.println("Enter value to insert at the beginning:");
                    int valueBegin = sc.nextInt();
                    list.insertAtBeginning(valueBegin);
                    break;
                case 2:
                    System.out.println("Enter value to insert at the end:");
                    int valueEnd = sc.nextInt();
                    list.insertAtEnd(valueEnd);
                    break;
                case 3:
                    System.out.println("Enter value to insert:");
                    int valuePos = sc.nextInt();
                    System.out.println("Enter position to insert:");
                    int positionInsert = sc.nextInt();
                    list.insertAtPosition(valuePos, positionInsert);
                    break;
                case 4:
                    list.deleteFirst();
                    break;
                case 5:
                    list.deleteLast();
                    break;
                case 6:
                    System.out.println("Enter position to delete:");
                    int positionDelete = sc.nextInt();
                    list.deleteAtPosition(positionDelete);
                    break;
                case 7:
                    list.display();
                    break;
                case 8:
                    sc.close();
                    System.out.println("Exit");
                    return;
                default:
                    System.out.println("Invalid");
            }
        }
    }
}
