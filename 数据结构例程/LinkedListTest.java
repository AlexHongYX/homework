
class Node{
	public int value;
	public Node next;
	
	public Node(int value){
		this.value = value;
		this.next = null;
	}
}

public class LinkedListTest{

	//main是静态方法，静态方法只能调用静态方法
	public static void display(Node head){
		for(Node cur = head;cur!=null;cur=cur.next){
			System.out.print(cur.value+"->");
		}
		System.out.println("null");
	}
	
	public static Node pushFront(Node head,int value){
		Node newNode = new Node(value);
		newNode.next = head;
		//通过return newNode更新头结点
		return newNode;
	}
	
	//尾插
	public static Node pushBack(Node head,int value){
		Node newNode = new Node(value);
		if(head==null){
			newNode.next = head;
			return newNode;
		}
		Node cur = head;
		while(cur.next!=null){
			cur=cur.next;
		}
		cur.next = newNode;
		return head;
	}
	
	public static Node pushFront(Node head,int value){
		if(head==null){
			return null;
		}
		Node newNode = new Node(value);
		newNode.next = head;
		//返回newNode即可，因为主函数就是用head来接收该函数的返回值
		return newNode;
	}
	
	public static Node popBack(Node head){
		if(head==null){
			return null;
		}
		if(head.next==null){
			return null;
		}
		for(Node cur=head;cur.next!=null;cur=cur.next){
		}
		cur.next=null;
		return head;
	}
	
	

	public static void main(String[] args){
		Node head = null;
		head = pushBack(head,1);
		head = pushBack(head,2);
		head = pushBack(head,3);
		display(head);
		head = pushFront(head,10);
		head = pushFront(head,20);
		head = pushFront(head,30);
		display(head);
	}
}

