import java.util.Scanner;

class DoublyLinkedList {    
	static Scanner sc = new Scanner(System.in);
    //A node class for doubly linked list

    class Node{  

        int item;  

        Node previous;  

        Node next;  

         public Node(int item) {  

            this.item = item;  

        }  

    }  

    //Initially, head and tail is set to null

    Node head, tail = null;  

   

    //add a node to the list  

    public void addNode(int item) {  

        //Create a new node  

        Node newNode = new Node(item);  

        //if list is empty, head and tail points to newNode  

        if(head == null) {  

            head = tail = newNode;  

            //head's previous will be null  

            head.previous = null;  

            //tail's next will be null  

            tail.next = null;  

        }  

        else {  

            //add newNode to the end of list. tail->next set to newNode  

            tail.next = newNode;  

            //newNode->previous set to tail  

            newNode.previous = tail;  

            //newNode becomes new tail  

            tail = newNode;  

            //tail's next point to null  

            tail.next = null;  

        }  

    }  

    public void deleteNodes() {

    	int x = head.item;

        head = head.next;

        System.out.println("Element "+x +" got deleted");

   }

//print all the nodes of doubly linked list  

    public void printNodes() {  

        //Node current will point to head  

        Node current = head;  

        if(head == null) {  

            System.out.println("Doubly linked list is empty");  

            return;  

        }  

        System.out.println("Nodes of doubly linked list: ");  

        while(current != null) {  

            //Print each node and then go to next.  

            System.out.print(current.item + " ");  

            current = current.next;  

        }  

    }  

}

public class Experiment20 extends DoublyLinkedList{
	private static char menu() {
        char ch;
        System.out.print("\nMain Main");
        System.out.print("\n1. Add Node");
        System.out.print("\n2. Delete Node");
        System.out.print("\n3. Print Node");
        System.out.print("\n4. Exit");
        System.out.print("\nEnter your choice: ");
        ch = sc.next().charAt(0);
        return ch;
    }
	
	public static void main(String[] args) {
		char ch;
		DoublyLinkedList dl = new DoublyLinkedList();
		do {
			ch = menu();
			switch (ch) {
                case '1':
                	System.out.println("Enter the item: ");
                	int n = sc.nextInt();
                	dl.addNode(n);
                    break;
                case '2':
                    dl.deleteNodes();
                    break;
                case '3':
                    dl.printNodes();
                    break;
                case '4':
                	System.out.println("Exiting");
                    break;
                default:
                    System.out.println("\nWRONG CHOICE!! TRY AGAIN\n");
            }
        }while(ch != '5');
    }
}
