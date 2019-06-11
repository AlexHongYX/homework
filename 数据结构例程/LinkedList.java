
import java.util.Arrays;

//表示结点
class Node{
	public int value; //保存结点中的数据
	public Node next;	//指向下一个节点的引用
				//特殊值null
				
	public Node(int value){
		this.value = value;
		this.next = null;
	}
	
}

public class LinkedList{
	
	public static void printNode(Node head){
		for(Node cur=head;cur!=null;cur=cur.next){
			System.out.print(cur.value+"-->");
		}
		System.out.println("null");
	}
	
	public static Node pushFront(Node head,int value){
		Node newNode = new Node(value);
		newNode.next = head;
		return newNode;
	}
	
	public static Node pushBack(Node head,int value){
		if(head==null){
			return pushFront(head,value);
		}
		Node newNode = new Node(value);
		Node cur = head;
		while(cur.next!=null){
			cur = cur.next;
		}
		cur.next = newNode;
		return head;
	}
	
	public Node getLast(Node head){
	/*
		Node cur = head;
		//不能放在for循环里面，cur的作0.用域
		for(;cur.next!=null;cur = cur.next){
		}
	*/
		Node cur = head;
		while(cur.next!=null){
			cur = cur.next;
		}
		return cur;
	
	}
	
	//头删
	public static Node popFront(Node node){
		if(head==null){
			System
		}
	}
	
	//尾删
	public static Node popBack(Node node){
		if(head==null){
			System.out.println("不合法");
			return null;
		}else if(head.next==null){
			return null;
		}else{
			Node lastLast = getLastLast(head);
			lastLast.next = null;
			return head;
		}
	}
	
	public Node getLastLast(Node head){
		Node node = head;
		while(node.next.next!=null){
			node = node.next;
		}			
		return node;
	}
	
	public static void main(String[] args){
		Node n1 = new Node(1);	//
		Node n2 = new Node(2);
		Node n3 = new Node(3);
		Node n4 = new Node(4);
		Node n5 = new Node(5);
		
		n1.next = n2;
		n2.next = n3;
		n3.next = n4;
		n4.next = n5;
		n5.next = null;
		
		Node head = n1;	//创建头结点
		
		printNode(head);
		
		head = pushFront(head,100);
		printNode(head);
		
		head = pushBack(head,200);
		printNode(head);
	}
}